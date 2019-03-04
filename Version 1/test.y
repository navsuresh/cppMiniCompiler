%{
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
void yyerror(const char *error_msg);

int counter = 0;
extern FILE *yyin;

extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}
%}

%token INT FLOAT CHAR DOUBLE VOID
%token NUM ID
%token FOR

%right '='
%left AND OR
%left  LE GE EQ NE LT GT DP DM
%start init

%%
init
	: init declaration
	| init func_declaration 
	| 
	;

declaration
	: type assignment_st ';'
	| assignment_st ';'
	| type array_st';'
	;
 
array_st
	: ID '[' NUM ']'
	;

func_declaration
	: type ID '(' arg_list_optional ')' compound_st
	;

compound_st 
	: '{' statement_structure '}'
	;

statement_structure 
	: statement_structure statement
	| statement
	;

statement
	: declaration
	| for_stmt
	;

for_stmt: FOR '(' assignment_st ';' expression ';' assignment_st ')' statement 
 	FOR '(' assignment_st ';' expression ';' assignment_st ')' compound_st 
 	;

arg_list_optional
	: arg_list_actual 
	| 
	;

arg_list_actual 
	: arg_list_actual ',' arg_final 
	| arg_final
	;

arg_final
	:type ID
	;

assignment_st
	: ID '=' ID
	| ID '=' NUM
	| ID
	| assignment_st_t
	;
	

assignment_st_t : assignment_st_f		
;
			



assignment_st_f :  '(' assignment_st ')' | 

type
	: INT 
	| FLOAT 
	| CHAR 
	| DOUBLE 
	| VOID
	;
expression:  expression LE expression 
	| expression GE expression
	| expression NE expression
	| expression EQ expression
	| expression GT expression
	| expression LT expression
	|ID | NUM
	;
%%




void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {

	cout<<"HELLO WORLD\n";
	yyin = fopen(argv[1], "r");
	if (!yyparse()) {
		printf("successful\n");
	} else {
		printf("unsuccessful\n");
	}
	fclose(yyin);
	return 0;
}


