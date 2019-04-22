#include <iostream>

 

i = 0
n = 5
L0 : 
t0 = i < n
t1 = not t0
if t1 goto L1
goto L2
L3 :
i = 5
L2 :
    j = 5

goto L3 
L1: 




Parsing is successful


