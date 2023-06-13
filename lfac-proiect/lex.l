%{
#include <stdio.h>
#include <stdbool.h>
int nr_linii=0;
#include "y.tab.h"
int yylex();
%}
%option yylineno

cifre [0-9]
int [1-9]{cifre}*
char [a-zA-Z]
%%
"global()" {strcpy(yylval.nd_obj.name,(yytext));return GLOBAL;}
"functions()" {strcpy(yylval.nd_obj.name,(yytext));return FUNCTIONS;}
"eval" {strcpy(yylval.nd_obj.name,(yytext));return EVAL;} 
"typeof" {strcpy(yylval.nd_obj.name,(yytext));return TYPEOF;} 
"main()" {strcpy(yylval.nd_obj.name,(yytext));return MAIN;}
"print" {strcpy(yylval.nd_obj.name,(yytext));return PRINT;}
"printf" {strcpy(yylval.nd_obj.name,(yytext));return PRINTF;}
"int" {strcpy(yylval.nd_obj.name,(yytext));return INT;}
"bool" {strcpy(yylval.nd_obj.name,(yytext));return BOOL;}
"float" {strcpy(yylval.nd_obj.name,(yytext));return FLOAT;}
"char" {strcpy(yylval.nd_obj.name,(yytext));return CHAR;}
"return" {strcpy(yylval.nd_obj.name,(yytext)); return RETURN;}
"if_else" {strcpy(yylval.nd_obj.name,(yytext));return IF_ELSE;}
"for" {strcpy(yylval.nd_obj.name,(yytext)); return FOR;}
"while" {strcpy(yylval.nd_obj.name,(yytext));return WHILE;}
"do" {strcpy(yylval.nd_obj.name,(yytext));return DO;}
"if" {strcpy(yylval.nd_obj.name,(yytext)); return IF;}
"else" {strcpy(yylval.nd_obj.name,(yytext));return ELSE;}
"void" {strcpy(yylval.nd_obj.name,(yytext)); return VOID;}
"function" {strcpy(yylval.nd_obj.name,(yytext));return FUNCTION;}
"call" {strcpy(yylval.nd_obj.name,(yytext));return CALL;}
"true" {strcpy(yylval.nd_obj.name,(yytext));strcpy(yylval.nd_obj.boolval,(yytext)); return TRUE_FALSE;}
"false" {strcpy(yylval.nd_obj.name,(yytext));strcpy(yylval.nd_obj.boolval,(yytext)); return TRUE_FALSE;}
{int} {strcpy(yylval.nd_obj.name,(yytext));yylval.nd_obj.intval=atoi(yytext); return NUMAR;}
{int}+\.{cifre}+ {strcpy(yylval.nd_obj.name,(yytext));yylval.nd_obj.realval=atof(yytext);return NUMAR_REAL;}
{char}({char}|{cifre})* {strcpy(yylval.nd_obj.name,(yytext));strcpy(yylval.nd_obj.strval,strdup(yytext));return ID;}
{char}({char}|{cifre})*"["{int}"]" {strcpy(yylval.nd_obj.name,(yytext));char cpy[100];strcpy(cpy,yylval.nd_obj.name); char* token; token=strtok(cpy,"["); 
                        strcpy(yylval.nd_obj.strval,token);
                        token=strtok(NULL,"]");
                        yylval.nd_obj.intval=atoi(token);
                       return VECTOR;}
["].*["] {strcpy(yylval.nd_obj.name,(yytext));strcpy(yylval.nd_obj.strval,strdup(yytext));return SIR_CAR;}
['].['] {yylval.nd_obj.charval=yytext[1];strcpy(yylval.nd_obj.name,(yytext));return CARACTER;}
"+"  {strcpy(yylval.nd_obj.name,(yytext));return ADUNARE;}
"-"  {strcpy(yylval.nd_obj.name,(yytext));return SCADERE;}
"*"  {strcpy(yylval.nd_obj.name,(yytext));return INMULTIRE;}
"/"  {strcpy(yylval.nd_obj.name,(yytext));return DIV;}
"%"  {strcpy(yylval.nd_obj.name,(yytext));return MODULO;}
"+=" {strcpy(yylval.nd_obj.name,(yytext)); return ADUNARE_ATR;}
"-=" {strcpy(yylval.nd_obj.name,(yytext)); return SCADERE_ATR;}
"*=" {strcpy(yylval.nd_obj.name,(yytext));return INMULTIRE_ATR;}
"/=" {strcpy(yylval.nd_obj.name,(yytext)); return DIV_ATR;}
"%=" {strcpy(yylval.nd_obj.name,(yytext)); return MOD_ATR;}
"++" {strcpy(yylval.nd_obj.name,(yytext));return INCREMENTARE;}
"--" {strcpy(yylval.nd_obj.name,(yytext));return DECREMENTARE;}
"&&" {strcpy(yylval.nd_obj.name,(yytext));return AND;}
"||" {strcpy(yylval.nd_obj.name,(yytext));return OR;}
"!"  {strcpy(yylval.nd_obj.name,(yytext));return NOT;}
"!=" {strcpy(yylval.nd_obj.name,(yytext));return DIFERIT;}
"==" {strcpy(yylval.nd_obj.name,(yytext));return EGALITATE;}
"<"  {strcpy(yylval.nd_obj.name,(yytext));return LT;}
">"  {strcpy(yylval.nd_obj.name,(yytext));return GT;}
"=" {strcpy(yylval.nd_obj.name,(yytext));return ATR;}
"<=" {strcpy(yylval.nd_obj.name,(yytext));return LE;}
">=" {strcpy(yylval.nd_obj.name,(yytext));return GE;}
";"  {strcpy(yylval.nd_obj.name,(yytext));return ';';}
","  {strcpy(yylval.nd_obj.name,(yytext));return ',';}
"("  {strcpy(yylval.nd_obj.name,(yytext));return '(';}
")"  {strcpy(yylval.nd_obj.name,(yytext));return ')';}
"~"  {strcpy(yylval.nd_obj.name,(yytext));return '~';}
":=" {strcpy(yylval.nd_obj.name,(yytext));return ATRR;}
"["  {strcpy(yylval.nd_obj.name,(yytext));return '[';}
"]"  {strcpy(yylval.nd_obj.name,(yytext));return ']';}
"{"  {strcpy(yylval.nd_obj.name,(yytext)); return'{';}
"}"  {strcpy(yylval.nd_obj.name,(yytext)); return'}';}
"$" {strcpy(yylval.nd_obj.name,(yytext)); return'$';}
\/\/.* { ; }
\/\*(.*\n)*.*\*\/ { ; }
[ \t]* ;
[\n] {yylineno++;nr_linii++;}
. {strcpy(yylval.nd_obj.name,(yytext)); *yytext;}
%%
int yywrap() 
 { 
  return 1; 
 }

