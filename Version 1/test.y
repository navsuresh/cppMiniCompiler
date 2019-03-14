%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

using namespace std;
ast test;
ast test1;
unordered_map <string,int> size_map;
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
extern FILE *yyout;
extern int yylineno;
extern int scope_count;
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

%token <str> ID NUM INT FLOAT CHAR DOUBLE VOID AMP DM DP '+' '-' '*' '(' ')' '[' ']'
%token FOR WHILE IF ELSE 
%token MAIN
%right ','
%right '='
%left AND OR
%left  LE GE EQ NE LT GT 
%left '+' '-'
%left '*' '/' '%'	
%right	DP DM 
%left '(' ')'
%nonassoc NO_ELSE
%nonassoc ELSE

%type<str> type func_call array_st_usage
%type<node> array_st assignment_st assignment_st_t assignment_st_f
%start init

%%
init
	: init declaration
	| init func_declaration 
	| 
	;

declaration
	: type assignment_st ';' {
		// cout<<"BIG SCOPE\n";
		//cout<<"LINE N1O IS "<<yylineno<<"\n";
		//cout<<"get_identifier is "<<$2->get_identifier()<<"\n";
		$2->set_size(size_map[$1]);
		$2->set_type($1);
		//cout<<"DISPLAY IS "<<"\n";
		//$2->disp_node(); 
		test1.insert(*$2);}
	| assignment_st ';' {

	}
	| type array_st';'{
		$2->set_size($2->get_size()*size_map[$1]);
		$2->set_type($1);
		// $2->disp_node(); 
		test1.insert(*$2);
	
	}
	;
 
array_st
	: ID '[' NUM ']' {$$ = new node(yylineno,$1,"","",$3,scope_count);}
	;

array_st_usage
	: ID '[' NUM ']' 
	{
	vector<string> temp1{$1,$2,$3,$4};
    $$ = conversion(temp1);
	}	
	;

func_declaration
	: type ID '(' arg_list_optional ')' compound_st |
	 type MAIN '(' arg_list_optional ')' compound_st
	;
func_call
	:ID '(' arg_list_call ')'';'
	;

compound_st 
	: '{' STATEMENT_STRUCTURE {scope_count+=1;}
	;

STATEMENT_STRUCTURE
	: statement_structure CLOSE {scope_count-=1;}

CLOSE 
	: '}' 

statement_structure 
	: statement_structure statement
	| statement
	;

statement
	: declaration
	| while_stmt
	| for_stmt {cout<<"FOOOR LOOP\n";}
	| if_stmt
	;

while_stmt: WHILE '(' expression ')' statement
	| WHILE '(' expression ')' compound_st
	;

start_if_stmt : IF '(' expression ')' statement; 
start_if_compound_st: IF '(' expression ')' compound_st; 
if_stmt : start_if_stmt
	| start_if_compound_st
	| start_if_stmt ELSE statement
	| start_if_stmt ELSE compound_st
	| start_if_compound_st ELSE statement
	| start_if_compound_st ELSE compound_st
	;	



arg_list_optional
	: arg_list_actual 
	| 
	;
arg_list_call
	:arg_list_call_actual
	|
	;
arg_list_call_actual
	:arg_list_call_actual ',' ID
	|ID
	;
arg_list_actual 
	: arg_list_actual ',' arg_final 
	| arg_final
	;

arg_final
	:type ID
	;

for_s : FOR '('
just_before_for: for_s assignment_st_for  expression_for  assignment_st_for_1 ')';
just_before_for_1: for_s assignment_st_for_1 ';'  expression_for  assignment_st_for_1 ')';
for_stmt
	:just_before_for statement {cout<<"HERE1\n";}
	|just_before_for compound_st {cout<<"HERE2\n";}
	|just_before_for_1 compound_st {cout<<"HERE3\n";}
 	|just_before_for_1 statement {cout<<"HERE4\n";}
	 
	
 	;

assignment_st_for
	: 
	|	declaration { cout << "entered here\n";}
	| ';'
	;
expression_for
	: 
	| expression ';'
	| ';'
	;

assignment_st_for_1
	:
	assignment_st
	| 
	;

assignment_st
	:	ID '=' assignment_st	{$$ = new node(yylineno,$1,"",$3->get_value(),0,scope_count);}
	|	assignment_st ',' assignment_st
	|	assignment_st '+' assignment_st_t {$$->set_value($1->get_value()+'+'+$3->get_value());}
	|	assignment_st '-' assignment_st_t {$$->set_value($1->get_value()+'-'+$3->get_value());}
	|	assignment_st_t {"ASSIFNMENT T\n";}
	;

assignment_st_t
	:	assignment_st_t '*' assignment_st_f {$$->set_value($1->get_value()+'*'+$3->get_value());}
	|	assignment_st_t '/' assignment_st_f {$$->set_value($1->get_value()+'/'+$3->get_value());}
	|	assignment_st_t '%' assignment_st_f { cout<<"HEREERE\n";$$->set_value($1->get_value()+'%'+$3->get_value());}
	|	assignment_st_f
	;
assignment_st_f
	:	'(' assignment_st ')' 
		{
		vector<string> temp1{$1,$2->get_value(),$3};
		$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'-' '(' assignment_st ')'
		{
		vector<string> temp1{$1,$2,$3->get_value(),$4};
		$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	DM ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	DP ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	DP NUM
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}	
	|	DM NUM
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	ID DP
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	ID DM
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	NUM DP
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	NUM DM
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'+' NUM
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'-' NUM	
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'+' ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'-' ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'*'ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,$2,"","",0,scope_count);
		}
	|	AMP ID
		{
			vector<string> temp1{$1,$2};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	ID
		{
			vector<string> temp1{$1};
		//	cout<<"COVERSION IS "<<conversion(temp1)<<"\n";
		//	cout<<"LINE NO IS "<<yylineno<<"\n";
			// $$ = new node(yylineno,$1,"","",0,scope_count);
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		
		//	cout<<"ID DISPLAY IS\n";
		//	$$->disp_node();
		}
	|	NUM
		{
			vector<string> temp1{$1};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	'*' assignment_st
		{
			vector<string> temp1{$1,$2->get_value()};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	array_st_usage	
		{	
			vector<string> temp1{$1};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	|	func_call
		{
			vector<string> temp1{$1};
			$$ = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
	;



			




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
	| ID 
	| NUM 
	;
%%




void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {


    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;
//	char dest[100];
//	char another[7];
//	cout <<"entered here"<<"\n";
//	strcpy(another,"_c.txt");
//	cout <<"entered here"<<"\n";

	//strcpy(dest,(char *)argv[1]);
	//strcat(dest,another);
	// cout<<"HELLO WORLD\n";
	yyin = fopen(argv[1], "r");
	//yyout= fopen(argv[1],"w");
	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}


	test1.display();
	fclose(yyin);
//	fclose(yyout);

	return 0;
}



