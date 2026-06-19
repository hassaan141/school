#!/usr/bin/env bash
# Convert a course's PDFs into categorized markdown folders.
# Usage:  ./convert_notes.sh <course_dir> <pdf_source_dir>
# Example: ./convert_notes.sh mte203 "mte203/MTE 203 - Spring 2026 - 6182026 - 1239 PM"
set -euo pipefail

SCHOOL="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCHOOL/.venv/bin/activate"

COURSE="$1"          # e.g. mte203
SRC="$2"             # folder containing the PDFs
DEST="$SCHOOL/$COURSE/notes"

# Decide a category subfolder from the filename.
categorize() {
  local name="$1"
  shopt -s nocasematch
  if   [[ "$name" == *clicker* || "$name" == *iclicker* ]]; then echo "clickers"
  elif [[ "$name" == *homework* ]]; then echo "homework"
  elif [[ "$name" == *tutorial* ]]; then echo "tutorials"
  elif [[ "$name" == *lecture* ]]; then echo "lectures"
  elif [[ "$name" == *midterm* || "$name" == *exam* || "$name" == *"problem"* ]]; then echo "exams"
  elif [[ "$name" == *formula* || "$name" == *refresher* || "$name" == *reference* ]]; then echo "reference"
  else echo "misc"
  fi
  shopt -u nocasematch
}

count=0
find "$SRC" -maxdepth 1 -type f -name '*.pdf' | while read -r pdf; do
  base="$(basename "$pdf" .pdf)"
  cat="$(categorize "$base")"
  outdir="$DEST/$cat"
  mkdir -p "$outdir"
  out="$outdir/$base.md"
  echo "[$cat] $base"
  python3 - "$pdf" "$out" <<'PY' || echo "  !! failed: $base"
import sys
sys.setrecursionlimit(10000)
from markitdown import MarkItDown
src, out = sys.argv[1], sys.argv[2]
open(out, "w").write(MarkItDown().convert(src).text_content)
PY
done

echo "Done -> $DEST"
