/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINT = 258,
    GLOBAL = 259,
    FUNCTIONS = 260,
    MAIN = 261,
    PRINTF = 262,
    INT = 263,
    BOOL = 264,
    FLOAT = 265,
    CHAR = 266,
    STRING = 267,
    EVAL = 268,
    RETURN = 269,
    FOR = 270,
    WHILE = 271,
    DO = 272,
    IF_ELSE = 273,
    VOID = 274,
    FUNCTION = 275,
    IF = 276,
    ELSE = 277,
    CALL = 278,
    VECTOR = 279,
    ATRR = 280,
    NUMAR = 281,
    TYPEOF = 282,
    NUMAR_REAL = 283,
    ID = 284,
    SIR_CAR = 285,
    CARACTER = 286,
    ATR = 287,
    ADUNARE_ATR = 288,
    SCADERE_ATR = 289,
    INMULTIRE_ATR = 290,
    DIV_ATR = 291,
    MOD_ATR = 292,
    TRUE_FALSE = 293,
    DIFERIT = 294,
    AND = 295,
    OR = 296,
    NOT = 297,
    EGALITATE = 298,
    GT = 299,
    GE = 300,
    LT = 301,
    LE = 302,
    ADUNARE = 303,
    SCADERE = 304,
    INMULTIRE = 305,
    DIV = 306,
    MODULO = 307,
    INCREMENTARE = 308,
    DECREMENTARE = 309
  };
#endif
/* Tokens.  */
#define PRINT 258
#define GLOBAL 259
#define FUNCTIONS 260
#define MAIN 261
#define PRINTF 262
#define INT 263
#define BOOL 264
#define FLOAT 265
#define CHAR 266
#define STRING 267
#define EVAL 268
#define RETURN 269
#define FOR 270
#define WHILE 271
#define DO 272
#define IF_ELSE 273
#define VOID 274
#define FUNCTION 275
#define IF 276
#define ELSE 277
#define CALL 278
#define VECTOR 279
#define ATRR 280
#define NUMAR 281
#define TYPEOF 282
#define NUMAR_REAL 283
#define ID 284
#define SIR_CAR 285
#define CARACTER 286
#define ATR 287
#define ADUNARE_ATR 288
#define SCADERE_ATR 289
#define INMULTIRE_ATR 290
#define DIV_ATR 291
#define MOD_ATR 292
#define TRUE_FALSE 293
#define DIFERIT 294
#define AND 295
#define OR 296
#define NOT 297
#define EGALITATE 298
#define GT 299
#define GE 300
#define LT 301
#define LE 302
#define ADUNARE 303
#define SCADERE 304
#define INMULTIRE 305
#define DIV 306
#define MODULO 307
#define INCREMENTARE 308
#define DECREMENTARE 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "parser.y"

    struct var_name {
    char name[500];
    int intval;
    char charval;
    char tip[10];
    float realval;
    char strval[500];
    char boolval[10];
    struct node* nd;
} nd_obj;

#line 178 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
