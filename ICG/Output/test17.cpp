#include<iostream>


   i = 0
 L0: 
t0 = i < 5
t1 = not t0
if t1 goto L1
 j = 9
L1: 
t2 = j < 56
t3 = not t2
if t3 goto L2
goto L3
L4:
t2 = j+1
j = t2
L3:
 t2 = i+1
i = t2
 goto L4 
L2: 
 goto L0 
L5: 




Parsing is successful


