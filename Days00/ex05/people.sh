ldapsearch -x "uid=z*" | grep -a 'cn:' | sort -rf | cut -c5-
