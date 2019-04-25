%{
#if YYBISON
union YYSTYPE;
int yylex();
void yyerror();
#endif
#include<string.h>
#include<stdio.h>
char st[100][10];
int top=0;
char i_[3]="00";
char temp[2]="t";
int lnum=0;
int start=1;
extern char* yytext;
extern int yylineno;
void push()
 {
	 
  strcpy(st[++top], yytext);
 }

void codegen()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	top-=2;
	strcpy(st[top],temp);
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
}

void codegen_umin()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = -%s\n",temp,st[top]);
	top--;
	strcpy(st[top],temp);
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
}

void codegen_assign()
{
	printf("%s = %s\n",st[top-2],st[top]);
	top-=2;
}

void codegen_assign_unary()
{
	printf("%s = %s%c1\n",st[top-2],st[top - 1], st[top][0]);
	printf("%s = %s\n",st[top-1],st[top - 2]);

	top-=2;
}

void lab1_while()
{
	printf("L%d : \n",lnum++);
}

void lab2_while()
{
	strcpy(temp,"t");
	strcat(temp,i_);

	printf("%s = not %s\n",temp,st[top]);
	printf("if %s goto L%d\n",temp,lnum);
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}

}

void lab3_while()
{
	printf("goto L%d \n",start);
	printf("L%d : \n",lnum++);
}
void lab1_for()
{
	printf("L%d : \n",lnum++);
}

void lab2_for(int s)
{
	strcpy(temp,"t");
	strcat(temp,i_);
	if(s!=0)
		printf("%s = not %s\n",temp,st[top]);
	printf("if %s goto L%d\n",temp,lnum++);
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
	printf("goto L%d\n", lnum++);
	printf("L%d :\n", lnum++);
}

void lab3_for()
{
	printf("L%d :\n", lnum - 2);
}
void lab4_for()
{
	printf("goto L%d \n",lnum - 1);
	printf("L%d : \n",lnum - 3);
}
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
%nonassoc FOR1
%nonassoc FOR2
%start translation_unit
%%

primary_expression
	: IDENTIFIER { push();}
	| CONSTANT {push();}
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP {push(); codegen_assign_unary();}
	| postfix_expression DEC_OP {push(); codegen_assign_unary();}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP {push();}unary_expression {codegen_assign_unary();}
	| DEC_OP {push();}unary_expression {codegen_assign_unary();}
	| unary_operator unary_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;



multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' {push();} unary_expression {codegen();}
	| multiplicative_expression '/' {push();} unary_expression {codegen();}
	| multiplicative_expression '%' {push();} unary_expression {codegen();}
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' {push();} multiplicative_expression {codegen();}
	| additive_expression '-' {push();} multiplicative_expression {codegen();}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP  {push();} additive_expression {codegen();}
	| shift_expression RIGHT_OP  {push();} additive_expression {codegen();}
	;

relational_expression
	: shift_expression
	| relational_expression '<' {push();} shift_expression {codegen();}
	| relational_expression '>'  {push();} shift_expression {codegen();}
	| relational_expression LE_OP  {push();} shift_expression {codegen();}
	| relational_expression GE_OP  {push();} shift_expression {codegen();}
	;

equality_expression
	: relational_expression 
	| equality_expression EQ_OP {push();} relational_expression {codegen();}
	| equality_expression NE_OP {push();} relational_expression {codegen();}
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression  assignment_operator assignment_expression {codegen_assign();}
	;

assignment_operator
	: '='{push();}
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression 
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' {push();}initializer{codegen_assign();}
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| TYPE_NAME
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator
	;

direct_declarator
	: IDENTIFIER {push();}
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	;


initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	;


compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	| '{' statement_list declaration_list  '}'
	| '{' statement_list declaration_list statement_list  '}'
	| '{' declaration_list statement_list declaration_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';' {$$ = 0;}
	| expression ';' {$$ = 1;}
	;

selection_statement
	: IF '(' expression ')' statement %prec IFX
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE{lab1_while();} '(' expression ')'{lab2_while();} statement {lab3_while();}
	| DO statement WHILE '(' expression ')' ';'
	| FOR  '(' expression_statement {lab1_for();}expression_statement {lab2_for($5);} for_2
	;
for_2
	:    ')'  {lab3_for();}statement  {lab4_for();}
	|  expression ')' {lab3_for();} statement {lab4_for();}  ;
translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%
#include <stdio.h>
extern int column;
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
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful %d\n", yylineno);
	}
	
//	fclose(yyout);
	return 0;
}

