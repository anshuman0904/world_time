%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex();
%}

// Define YYSTYPE to hold different types
%union {
    int intval;
    char *strval;
}

// Specify types for tokens
%token <intval> NUMBER
%token <strval> IDENTIFIER
%type <intval> expression

%token INT IF ELSE WHILE RETURN ASSIGN SEMICOLON LPAREN RPAREN LBRACE RBRACE

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%

program:
    program statement
    | /* empty */
    ;

statement:
    declaration SEMICOLON
    | assignment SEMICOLON
    | conditional
    | loop
    | RETURN expression SEMICOLON
    ;

declaration:
    INT IDENTIFIER
    ;

assignment:
    IDENTIFIER ASSIGN expression
    ;

conditional:
    IF LPAREN expression RPAREN LBRACE program RBRACE
    | IF LPAREN expression RPAREN LBRACE program RBRACE ELSE LBRACE program RBRACE %prec ELSE
    ;

loop:
    WHILE LPAREN expression RPAREN LBRACE program RBRACE
    ;

expression:
    NUMBER
    | IDENTIFIER
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    return yyparse();
}
