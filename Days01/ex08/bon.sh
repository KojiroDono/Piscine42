ldapsearch -Q sn='*bon*' | grep '^cn' | wc -l | tr -d ' '
