#/bin/bash
cat -e &1 | grep -i "nicolas\tbauer" | rev | cut -d$'\t' -f2 | rev
