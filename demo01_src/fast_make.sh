#!/bin/bash

for f in `ls demo01_src/*.c`; do
    # Get the name of the output file
    out=${f/.c/.o}

    # Get the timestamp for both files
    last_f=`stat -c %Z ${f}`
    if [ -f ${out} ]; then
        last_out=`stat -c %Z ${out}`
    else
        last_out=0
    fi

    # Only compile if it's more recent
    if [ ${last_f} -gt ${last_out} ]; then
        gcc -c ${f} -o ${out}
    fi
done

gcc -o demo01 demo01_src/*.o
