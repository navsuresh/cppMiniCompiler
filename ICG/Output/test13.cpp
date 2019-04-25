#include <iostream>


 
      i = 0
L0 : 
   t00 = i < 5
t01 = not t00
if t01 goto L1
goto L2
L3 :
t00 = i+1
i = t00
L2 :
     j = 5
 goto L3 
L1 : 




Parsing is successful


