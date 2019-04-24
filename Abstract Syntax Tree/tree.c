#include <stdio.h>
#include <stdlib.h>
 
typedef struct node
{
    struct node* left;
    struct node* right;
    char* token;
} node;
 
char depth[ 2056 ];
int di;
 
void Build( node* tree, int n )
{
    if ( !tree )
        return;
 
    tree->token = "abs";
 
    if ( n )
    {
        tree->left = (node*)malloc( sizeof( node ) );
        tree->right = (node*)malloc( sizeof( node ) );
        Build( tree->left, n - 1 );
        Build( tree->right, n - 1 );
    }
 
    else
    {
        tree->left = NULL;
        tree->right = NULL;
    }
}
 
void Push( char c )
{
    depth[ di++ ] = ' ';
    depth[ di++ ] = c;
    depth[ di++ ] = ' ';
    depth[ di++ ] = ' ';
    depth[ di ] = 0;
}
 
void Pop( )
{
    depth[ di -= 4 ] = 0;
}
 
void Print( node* tree )
{ 
    if(tree==NULL){
      return;
    }
    printf("finished");
    printf( "(%s)\n", tree->token );
 
    if ( tree->left )
    {
        printf( "%s \\__", depth );
        printf("finished");
        Push( '|' );
        printf("finished\n");
        Print( tree->left );

        Pop( );
        printf("finished");
        if(tree->right){
        printf( "%s \\__", depth );
        Push( ' ' );
        Print( tree->right );
        Pop( );
      }
    }
}
 
int main( void )
{
    node* root = (node*)malloc( sizeof( node ) );
    Build( root, 3 );
    Print( root );
}