"""Parse a Verilator coverage.dat and report code (line/toggle) and
functional (user cover-property) coverage percentages, per file and overall.

Usage: python3 scripts/cov_report.py logs/coverage.dat [--min-pct 99]
Exit code 1 if any category is below --min-pct (line/functional only).
"""
import sys
from collections import defaultdict

FUNC_FILE = "axil_star_cov.sv"   


def parse(path):
    points = []
    with open(path, "rb") as f:
        for raw in f:
            raw = raw.strip()
            if not raw.startswith(b"C '"):
                continue
            body, _, cnt = raw.rpartition(b"' ")
            body = body[3:]  
            fields = {}
            for part in body.split(b"\x01"):
                if b"\x02" in part:
                    k, v = part.split(b"\x02", 1)
                    fields[k.decode()] = v.decode(errors="replace")
            fields["count"] = int(cnt)
            points.append(fields)
    return points


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else "logs/coverage.dat"
    min_pct = 99.0
    if "--min-pct" in sys.argv:
        min_pct = float(sys.argv[sys.argv.index("--min-pct") + 1])

    pts = parse(path)
    if not pts:
        print("no coverage points found in", path)
        sys.exit(1)

    
    by_cat = defaultdict(lambda: defaultdict(lambda: [0, 0]))  
    for p in pts:
        page = p.get("page", "?/?")
        cat = page.split("/", 1)[0]
        fn = p.get("f", "?").split("/")[-1]
        if cat == "v_user":
            cat = "functional"   
        elif fn == FUNC_FILE:
            continue  
        tally = by_cat[cat][fn]
        tally[1] += 1
        if p["count"] > 0:
            tally[0] += 1

    label = {"v_line": "code / line", "v_toggle": "code / toggle",
             "v_branch": "code / branch", "v_expr": "code / expr",
             "v_user": "user (RTL)", "functional": "FUNCTIONAL"}
    overall = {}
    print("=" * 66)
    for cat in sorted(by_cat):
        hit = sum(v[0] for v in by_cat[cat].values())
        tot = sum(v[1] for v in by_cat[cat].values())
        pct = 100.0 * hit / tot if tot else 0.0
        overall[cat] = pct
        print(f"{label.get(cat, cat):<16} : {hit:>5}/{tot:<5} = {pct:6.2f}%")
        for fn in sorted(by_cat[cat]):
            fh, ft = by_cat[cat][fn]
            fp = 100.0 * fh / ft if ft else 0.0
            mark = "" if fh == ft else "   <-- holes"
            print(f"    {fn:<28} {fh:>5}/{ft:<5} = {fp:6.2f}%{mark}")
    print("=" * 66)

    fail = False
    for cat in ("v_line", "functional"):
        if cat in overall and overall[cat] < min_pct:
            fail = True
    print("coverage goal (line & functional >= %.1f%%): %s"
          % (min_pct, "NOT MET" if fail else "MET"))
    sys.exit(1 if fail else 0)


if __name__ == "__main__":
    main()
