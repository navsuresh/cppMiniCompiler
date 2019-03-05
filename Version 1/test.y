%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"

using namespace std;
ast test;
ast test1;
const char *s = "Hello, World!";   

class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};




void yyerror(const char *error_msg);

int counter = 0;
extern FILE *yyin;
extern int yylineno;
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

%union {
	char* str;
	class node* node;
}

%token <str> ID NUM INT FLOAT CHAR DOUBLE VOID 
%token FOR


%right '='
%left AND OR
%left  LE GE EQ NE LT GT DP DM

%type<str> type 
%type<node> assignment_st
%start init

%%
init
	: init declaration
	| init func_declaration 
	| 
	;

declaration
	: type assignment_st ';' {cout<<"BIG SCOPE\n";$2->set_type($1);$2->disp_node(); test1.insert(*$2);}
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
	: ID '=' ID {$$ = new node(yylineno,$1,"",$3);}
	| ID '=' NUM {$$ = new node(yylineno,$1,"",$3);}
	| ID {$$ = new node(yylineno,$1,"","");}
	| assignment_st_t
	;
	

assignment_st_t : assignment_st_f		
;
			



assignment_st_f :  '(' assignment_st ')' | 

type
	: INT {$$=$1;}
	| FLOAT {$$=$1;}
	| CHAR {$$=$1;}
	| DOUBLE {$$=$1;}
	| VOID {$$=$1;}
	;
expression:  expression LE expression 
	| expression GE expression
	| expression NE expression
	| expression EQ expression
	| expression GT expression
	| expression LT expression
	| ID {printf("Value1 is %s\n",$1);}
	| NUM {printf("Value2 is %s\n",$1);}
	;
%%




void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {


    



	// cout<<"HELLO WORLD\n";
	yyin = fopen(argv[1], "r");
	if (!yyparse()) {
		printf("successful\n");
	} else {
		printf("unsuccessful\n");
	}


	test.insert(1,s,"int","");
test.insert(3,s,"float","");
test.insert(2,s,"double","");


const char *s1 = "Hello, World!1";   
test.insert(4,s1,"int","");
test.insert(4,s1,"float","");
test.insert(5,s1,"double","");



// test.display();
cout<<"TEST1 is \n";
test1.display();
	fclose(yyin);


	return 0;
}


