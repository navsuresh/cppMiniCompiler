#include<iostream>


int main(){ int i=0; while(i<5){ for( j=9;j<56;j++){ i++; } }
}

Preorder traversal of the abstract syntax tree
( main  int (   ( =  i  0 )( while ( <  i  5 )( for ( =  j  9 )(   (   ( <  j  56 )( ++  i ))( ++  j ))))))



Tree
(main)
 \__(int)
 \__( )
     \__(=)
     |   \__(i)
     |   \__(0)
     \__(while)
         \__(<)
         |   \__(i)
         |   \__(5)
         \__(for)
             \__(=)
             |   \__(j)
             |   \__(9)
             \__( )
                 \__( )
                 |   \__(<)
                 |   |   \__(j)
                 |   |   \__(56)
                 |   \__(++)
                 |       \__(i)
                 \__(++)
                     \__(j)



Parsing is successful


