#!/bin/bash
make
for f in Input/*; do
    ./exec < "$f" > Output/$(basename "$f")	
    echo "$f"
done
