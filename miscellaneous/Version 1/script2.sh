#!/bin/bash
echo " " > Output/op.txt
make
x=1
for f in Input/*; do
    echo "$f" >>Output/op.txt
    ./exec < "$f" >> Output/op.txt	
    echo "$f"
done
