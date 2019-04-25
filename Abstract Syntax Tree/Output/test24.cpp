#include<iostream>


   i = 0
 k = 5
L0 : 
t00 = k < 10
t01 = not t00
if t01 goto L1
goto L2
L3 :
t00 = k+1
k = t00
L2 :
   l = 0
L4 : 
t02 = l < 5
t03 = not t02
if t03 goto L5
goto L6
L7 :
t02 = l+1
l = t02
L6 :
  p = 0
 goto L7 
L5 : 
 goto L7 
L5 : 




Parsing is successful


