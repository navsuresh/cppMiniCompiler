#include<iostream>


   i = 0
 k = 5
L0: 
t0 = k < 10
t1 = not t0
if t1 goto L1
goto L2
L3:
t0 = k+1
k = t0
L2:
   l = 0
L4: 
t2 = l < 5
t3 = not t2
if t3 goto L5
goto L6
L7:
t2 = l+1
l = t2
L6:
  p = 0
 goto L7 
L5: 
 goto L7 
L5: 




Parsing is successful


