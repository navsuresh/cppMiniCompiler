#include <iostream>


int main()
{ for (i = 0; i < 5; i++) { int j; }
}

Preorder traversal of the abstract syntax tree
( main  int ( for ( =  i  0 )(   (   ( <  i  5 ) j )( ++  i ))))



Tree
(main)
 \__(int)
 \__(for)
     \__(=)
     |   \__(i)
     |   \__(0)
     \__( )
         \__( )
         |   \__(<)
         |   |   \__(i)
         |   |   \__(5)
         |   \__(j)
         \__(++)
             \__(i)



Parsing is successful


