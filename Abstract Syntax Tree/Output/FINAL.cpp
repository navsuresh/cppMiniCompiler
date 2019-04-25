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
 L8 : 
t04 = i > 5
t05 = not t04
if t05 goto L9
  j = 5
 L9 : 
t06 = j > 4
t07 = not t06
if t07 goto L10
 t06 = j-1
j = t06
 goto L1 
L10 : 
 t06 = i+1
i = t06
 goto L1 
L11 : 
 k = 5
L12 : 
t08 = k < 10
t09 = not t08
if t09 goto L13
goto L14
L15 :
t08 = k+1
k = t08
L14 :
 L16 : 
t10 = j > 4
t11 = not t10
if t11 goto L17
 t10 = j-1
j = t10
 goto L1 
L17 : 
 goto L17 
L15 : 
 i = 0
 L18 : 
t12 = i < 5
t13 = not t12
if t13 goto L19
 l = 0
L19 : 
t14 = l < 5
t15 = not t14
if t15 goto L20
goto L21
L22 :
t14 = l+1
l = t14
L21 :
  p = 0
 goto L22 
L20 : 
 p = i+1
i = p
 goto L1 
L23 : 
    t16 = i + j
t17 = k * l
t18 = t16 + t17
a = t18




Parsing is successful


