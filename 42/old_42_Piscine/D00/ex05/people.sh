#!/bin/sh
ldapsearch -LLL -Q "uid=z*" | grep "^cn: [zZ]" | cut -c 5- | sort -r
