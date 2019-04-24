#include<iostream>


int main(){ int i=0; while(i>=0){ if(i==0){ int j; int i = 10; } else if(i>0){ int k; } else{ int l; } }
}

Preorder traversal of the abstract syntax tree
( main  int (   ( =  i  0 )( while ( >=  i  0 )( else ( if ( ==  i  0 )(    j ( =  i  10 )))( else ( if ( >  i  0 ) k ) l )))))



Tree
(main)
 \__(int)
 \__( )
     \__(=)
     |   \__(i)
     |   \__(0)
     \__(while)
         \__(>=)
         |   \__(i)
         |   \__(0)
         \__(else)
             \__(if)
             |   \__(==)
             |   |   \__(i)
             |   |   \__(0)
             |   \__( )
             |       \__(j)
             |       \__(=)
             |           \__(i)
             |           \__(10)
             \__(else)
                 \__(if)
                 |   \__(>)
                 |   |   \__(i)
                 |   |   \__(0)
                 |   \__(k)
                 \__(l)



Parsing is successful


