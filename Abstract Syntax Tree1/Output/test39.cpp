int main()
{ int a; { int b; { int d; { int e; { int f; { int g; { int h; } } } } } } int c;
}

Preorder traversal of the abstract syntax tree
( main  int (    a (   (    b (    d (    e (    f (    g  h ))))) c )))



Tree
(main)
 \__(int)
 \__( )
     \__(a)
     \__( )
         \__( )
         |   \__(b)
         |   \__( )
         |       \__(d)
         |       \__( )
         |           \__(e)
         |           \__( )
         |               \__(f)
         |               \__( )
         |                   \__(g)
         |                   \__(h)
         \__(c)



Parsing is successful


