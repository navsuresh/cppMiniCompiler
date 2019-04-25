#include<iostream>


   i = 0
 L0 : 
t00 = i < 5
t01 = not t00
if t01 goto L1
 j = 9
L1 : 
t02 = j < 56
t03 = not t02
if t03 goto L2
goto L3
L4 :
t02 = j+1
j = t02
L3 :
 t02 = i+1
i = t02
 goto L4 
L2 : 
 goto L1 
L5 : 




Parsing is successful


