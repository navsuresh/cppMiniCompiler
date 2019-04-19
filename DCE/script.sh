#!/bin/bash
for f in Input/*; do
    python dce.py "$f" > Output/$(basename "$f")	
    echo "$f"
done
