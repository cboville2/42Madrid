#n!/bin/sh
find . -not -path '*/\.*' -type f -o -type d | wc -l | tr -d '\ '
