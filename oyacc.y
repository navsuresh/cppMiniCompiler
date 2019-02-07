%{
#include <stdio.h>
#include <stdlib.h>
extern FILE *fp;
%}

%token INT FLOAT CHAR DOUBLE VOID
%token FOR WHILE 
%token IF ELSE PRINTF 
%token STRUCT 
%token NUM ID
%token INCLUDE
%token DOT

%right '='
%left AND OR
%left '<' '>' LE GE EQ NE LT GT
%%


Initial : #include <iostream> Initial | #include ”TEXT” Initial | 
Initial Initial | Init | 
           #define TEXT TEXT 
Library ->  stdio.h | iostream | string.h
TEXT -> text
Init ->	Function | Declaration | Init Function | Init Declaration



Function -> Type ID (Arg_List_Optional) Compound_St
Declaration -> Type Assignment_St ; | Type * Assignment_St ; |
               Assignment_St ; |Function_Call ;| Array_St ;|
               Type Array_St ;|Struct_St ;

Type -> Qualifier Primitive_Type | Primitive_Type
Qualifier -> signed| unsigned | short | long | struct_type  
Primitive_Type -> int | float | char | double | void
ID-> identifier | struct_type.identifier
NUM -> number
Struct_St -> struct ID {Compound_St};
Struct_type -> ID


Assignment_St -> ID = Assignment_St  | Assignment_St , Assignment_St |
 	Assignment_St + Assignment_St_T |
Assignment_St - Assignment_St_T |
	Assignment_St_T
	

Assignment_St_T -> Assignment_St_T * Assignment_St_F |
			  Assignment_St_T / Assignment_St_F |
			  Assignment_St_T % Assignment_St_F |
			  Assignment_St_F		

			



Assignment_St_F -> Assignment_St Assignment_St | (Assignment_St)|
			- (Assignment_St)   | ++ ID               |
			-- ID               | ++ NUM              |
			-- NUM              | ID ++               |
			ID --               | NUM ++              |              
			NUM --              | + ID                | 
			+ NUM               | - ID                | 
			- NUM               | * ID                |
			& ID                | ID                  | 
                 NUM			   | * Assignment_St     |
Array_St		   | Function_Call

Function_Call -> ID() | ID(Assignment_St)

Array_St -> ID[Assignment_St]



Arg_List_Optional -> Arg_List_Actual | λ
Arg_List_Actual -> Arg_List_Actual , Arg_Final | Arg_Final
Arg_Final -> Type ID

Compound_St -> {Statement_Structure}

Statement_Structure -> Statement_Structure Statement | Statement
Statement -> Declaration | Loop | Jump | If | ;

Loop -> For_St | While_St | Do_While_St
Jump -> goto ID ; | continue ; | break ; | return ; | return Expression ;



If -> if (Expression) Statement | 
if (Expression) Compound_St |
if (Expression) Statement else Statement | 
if (Expression) Statement else Compound_St |
if (Expression) Compound_St else Statement |
if (Expression) Compound_St else Compound_St  


For_st -> for (Expression ; Expression ; Expression) Statement |
	     for (Expression ; Expression ; Expression) Compound_St 

While_St -> while (Expression ) Statement | 
while (Expression) Compound_St
Expression -> Assignment_St |Array_St      |
		  Expression == Expression |
		  Expression != Expression |
		  Expression <= Expression |
		  Expression >= Expression |
		  Expression < Expression |
		  Expression > Expression

