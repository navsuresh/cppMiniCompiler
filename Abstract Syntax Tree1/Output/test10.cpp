#include<iostream>

int main()
{ for(; i < 10; i = 5) { i = 5; }
}

Preorder traversal of the abstract syntax tree
( main  int ( for    (   (   ( <  i  10 )( =  i  5 ))( =  i  5 ))))



Tree
(main)
 \__(int)
 \__(for)
     \__( )
     \__( )
         \__( )
         |   \__(<)
         |   |   \__(i)
         |   |   \__(10)
         |   \__(=)
         |       \__(i)
         |       \__(5)
         \__(=)
             \__(i)
             \__(5)



Parsing is successful


