%{
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#if YYBISON
union YYSTYPE;
int yylex();
void yyerror();
#endif
extern char *yytext;


 typedef struct node
 {
 struct node *left;
 struct node *right;
 char *token;
 } node;
 node *mknode(node *left, node *right, char *token);
 void printtree(node *tree);
 void free_root(node *tree);
#define YYSTYPE struct node *
struct node *root;
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%nonassoc IFX
%nonassoc ELSE
%start translation_unit
%%

primary_expression
	: IDENTIFIER{$$=mknode(0,0,yytext);}
	| CONSTANT{$$=mknode(0,0,yytext);}
	| STRING_LITERAL{$$=mknode(0,0,yytext);}
	| '(' expression ')'{$$=$2;}
	;

postfix_expression
	: primary_expression{$$=$1;}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression{$$=$1;}
	| argument_expression_list ',' assignment_expression{$$=mknode($1,$3,",");}
	;

unary_expression
	: postfix_expression{$$=$1;}
	| INC_OP unary_expression {$1=mknode($2,0,"++"); $$=$1;}
	| DEC_OP unary_expression {$1=mknode($2,0,"--"); $$=$1;}
	| unary_operator unary_expression{$1=mknode($2,0,$1->token);}
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'{$$=mknode(0,0,"&");}
	| '*'{$$=mknode(0,0,"*");}
	| '+'{$$=mknode(0,0,"+");}
	| '-'{$$=mknode(0,0,"-");}
	| '~'{$$=mknode(0,0,"~");}
	| '!'{$$=mknode(0,0,"!");}
	;



multiplicative_expression
	: unary_expression{$$=$1;}
	| multiplicative_expression '*' unary_expression{$$=mknode($1,$3,"*");}
	| multiplicative_expression '/' unary_expression{$$=mknode($1,$3,"/");}
	| multiplicative_expression '%' unary_expression{$$=mknode($1,$3,"%");}
	;

additive_expression
	: multiplicative_expression{$$=$1;}
	| additive_expression '+' multiplicative_expression{$$=mknode($1,$3,"+");}
	| additive_expression '-' multiplicative_expression{$$=mknode($1,$3,"-");}
	;

shift_expression
	: additive_expression{$$=$1;}
	| shift_expression LEFT_OP additive_expression{$$=mknode($1,$3,"<<");}
	| shift_expression RIGHT_OP additive_expression{$$=mknode($1,$3,">>");}
	;

relational_expression
	: shift_expression{$$=$1;}
	| relational_expression '<' shift_expression{$$=mknode($1,$3,"<");}
	| relational_expression '>' shift_expression{$$=mknode($1,$3,">");}
	| relational_expression LE_OP shift_expression{$$=mknode($1,$3,"<=");}
	| relational_expression GE_OP shift_expression{$$=mknode($1,$3,">=");}
	;

equality_expression
	: relational_expression{$$=$1;}
	| equality_expression EQ_OP relational_expression{$$=mknode($1,$3,"==");}
	| equality_expression NE_OP relational_expression{$$=mknode($1,$3,"!=");}
	;

and_expression
	: equality_expression{$$=$1;}
	| and_expression '&' equality_expression{$$=mknode($1,$3,"&");}
	;

exclusive_or_expression
	: and_expression{$$=$1;}
	| exclusive_or_expression '^' and_expression{$$=mknode($1,$3,"^");}
	;

inclusive_or_expression
	: exclusive_or_expression{$$=$1;}
	| inclusive_or_expression '|' exclusive_or_expression{$$=mknode($1,$3,"|");}
	;

logical_and_expression
	: inclusive_or_expression{$$=$1;}
	| logical_and_expression AND_OP inclusive_or_expression{$$=mknode($1,$3,"&&");}
	;

logical_or_expression
	: logical_and_expression{$$=$1;}
	| logical_or_expression OR_OP logical_and_expression{$$=mknode($1,$3,"||");}
	;

conditional_expression
	: logical_or_expression{$$=$1;}
	| logical_or_expression '?' expression ':' conditional_expression {$1=mknode($1,$3,"if");  $$=mknode($1,$5,"else");}
	;

assignment_expression
	: conditional_expression{$$=$1; }
	| unary_expression assignment_operator assignment_expression{  $$=mknode($1,$3,$2->token); free_root($2);}
	;

assignment_operator
	: '='{$$=mknode(0,0,"=");}
	| MUL_ASSIGN{$$=mknode(0,0,"*=");}
	| DIV_ASSIGN{$$=mknode(0,0,"*=");}
	| MOD_ASSIGN{$$=mknode(0,0,"%=");}
	| ADD_ASSIGN{$$=mknode(0,0,"+=");}
	| SUB_ASSIGN{$$=mknode(0,0,"-=");}
	| LEFT_ASSIGN{$$=mknode(0,0,"<<=");}
	| RIGHT_ASSIGN{$$=mknode(0,0,">>=");}
	| AND_ASSIGN{$$=mknode(0,0,"&&=");}
	| XOR_ASSIGN{$$=mknode(0,0,"^=");}
	| OR_ASSIGN{$$=mknode(0,0,"||=");}
	;

expression
	: assignment_expression{$$=$1;}
	| expression ',' assignment_expression {$$=mknode($1,$3,",");}
	;

constant_expression
	: conditional_expression{$$=$1;}
	;

declaration
	: declaration_specifiers ';'{$$=$1;}
	| declaration_specifiers init_declarator_list ';'{$$=$2;}
	;

declaration_specifiers
	: type_specifier{$$=$1;}
	| type_specifier declaration_specifiers{$$=mknode($1,$2,$1->token);}
	;

init_declarator_list
	: init_declarator{$$=$1;}
	| init_declarator_list ',' init_declarator{$$=mknode($1,$2,",");}
	;

init_declarator
	: declarator{$$=$1;}
	| declarator '=' initializer{$$=mknode($1,$3,"=");}
	;

type_specifier
	: VOID{$$=mknode(0,0,"void");}
	| CHAR{$$=mknode(0,0,"char");}
	| SHORT{$$=mknode(0,0,"short");}
	| INT{$$=mknode(0,0,"int");}
	| LONG{$$=mknode(0,0,"long");}
	| FLOAT{$$=mknode(0,0,"float");}
	| DOUBLE{$$=mknode(0,0,"double");}
	| SIGNED{$$=mknode(0,0,"signed");}
	| UNSIGNED{$$=mknode(0,0,"unsigned");}
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list{$$=mknode($1,$2,$1->token);}
	| type_specifier{$$=$1;}
	;

declarator
	: direct_declarator{$$=$1;}
	;

direct_declarator
	: IDENTIFIER{$$=mknode(0,0,yytext);}
	| '(' declarator ')'{$$=$2;}
	| direct_declarator '[' constant_expression ']'{$$=mknode($1,$3,"[]");}
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

parameter_type_list
	: parameter_list{$$=$1;}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration{$$=$1;}
	| parameter_list ',' parameter_declaration{$$=mknode($1,$2,",");}
	;

parameter_declaration
	: declaration_specifiers declarator{$$=mknode($1,$2,$1->token);}
	| declaration_specifiers{$$=$1;}
	;

identifier_list
	: IDENTIFIER{$$=mknode(0,0,yytext);}
	| identifier_list ',' IDENTIFIER{$3=mknode(0,0,yytext); $$=mknode($1,$3,",");}
	;

type_name
	: specifier_qualifier_list{$$=$1;}
	;


initializer
	: assignment_expression{$$=$1;}
	| '{' initializer_list '}'{$$=$2;}
	;

initializer_list
	: initializer{$$=$1;}
	| initializer_list ',' initializer{$$=mknode($1,$3,",");}
	;

statement
	: compound_statement{$$=$1;}
	| expression_statement{$$=$1;}
	| selection_statement{$$=$1;}
	| iteration_statement{$$=$1;}
	;


compound_statement
	: '{' '}'
	| '{' statement_list '}'{$$=$2;}
	| '{' declaration_list '}'{$$=$2;}
	| '{' declaration_list statement_list '}'{$$=mknode($2,$3," ");}
	| '{' statement_list declaration_list  '}'{$$=mknode($2,$3," ");}
	;

declaration_list
	: declaration{$$=$1;}
	| declaration_list declaration{$$=mknode($1,$2," ");}
	;

statement_list
	: statement{$$=$1;}
	| statement_list statement{$$=mknode($1,$2," ");}
	;

expression_statement
	: ';' {$$=mknode(0,0," ");}
	| expression ';'{$$=$1;}
	;

selection_statement
	: IF '(' expression ')' statement %prec IFX {$$=mknode($3,$5,"IF");}
	| IF '(' expression ')' statement ELSE statement{$1=mknode($3,$5,"if"); $$=mknode($1,$7,"else");}
	;

iteration_statement
	: WHILE '(' expression ')' statement { $$=mknode($3,$5,"while");}
	| FOR '(' expression_statement expression_statement ')' statement {$$=mknode(mknode($3,$4,"for"),$6,$4->token);}
	| FOR '(' expression_statement expression_statement expression ')' statement {$$=mknode($3,mknode(mknode($4,$7," "),$5," "),"for");}
	;

translation_unit
	: external_declaration{$$=$1; if(root==NULL){root=$$; }}
	| translation_unit external_declaration{$$=mknode($1,$2," ");root=$$;}
	;

external_declaration
	: function_definition{$$=$1;}
	| declaration{$$=$1;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {$$=mknode($1,$4,"func");}
	| declaration_specifiers declarator compound_statement { $$=mknode($1,$3,$2->token);}
	| declarator declaration_list compound_statement{$$=mknode($1,$3,"func");}
	| declarator compound_statement{$$=mknode($1,$2,"func");}
	;
%%

extern int column;
void yyerror(){
	printf("Parsing Unsuccessful!!\n");
}
char depth[ 2056 ];
int di=0;


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
{	if(tree==NULL){
	return ;
}
    printf( "(%s)\n", tree->token );
 
    if ( tree->left )
    {
        printf( "%s \\__", depth );
        Push( '|' );
        Print( tree->left );
        Pop( );
 		if(tree->right){
        printf( "%s \\__", depth );
        Push( ' ' );
        Print( tree->right );
        Pop( );
        }
    }

}



int main(int argc, char *argv[]) {
//	char dest[100];
//	char another[7];
//	cout <<"entered here"<<"\n";
//	strcpy(another,"_c.txt");
//	cout <<"entered here"<<"\n";
	//strcpy(dest,(char *)argv[1]);
	//strcat(dest,another);
	// cout<<"HELLO WORLD\n";
	//yyout= fopen(argv[1],"w");
	if (!yyparse()) {
		printf("\n\nPreorder traversal of the abstract syntax tree\n");
		printtree(root);
		printf("\n\n\n\nTree\n");
		Print(root);
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
	free_root(root);
//	fclose(yyout);
	return 0;
}

node *mknode(node *left, node *right, char *token)
{ /* malloc the node */
 node *newnode = (node *)malloc(sizeof(node));
 char *newstr = (char *)malloc(strlen(token)+1);
 strcpy(newstr, token);
 newnode->left = left;
 newnode->right = right;
 newnode->token = newstr;
 return(newnode);
}


void free_root(node *tree){
	if(tree==NULL){
	return ;
	}
	if(tree->left){
	free_root(tree->left);
	}
	if(tree->right){
	free_root(tree->right);
	}
	free(tree->token);
	free(tree);
}

void printtree(node *tree)
{
 int i;
 if (tree->left || tree->right)
 printf("(");
 printf(" %s ", tree->token);
 if (tree->left)
 printtree(tree->left);
 if (tree->right)
 printtree(tree->right);
 if (tree->left || tree->right)
 printf(")");
}