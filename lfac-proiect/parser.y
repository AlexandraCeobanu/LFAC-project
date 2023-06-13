%{
    #include<stdio.h>
    #include<string.h>
    #include <stdbool.h>
    #include<stdlib.h>
    #include<ctype.h>
    extern int yylineno;
    extern FILE* yyin;
    extern char* yytext;
    void yyerror( char *msg);
    int yylex();
    int yywrap();
    struct simbol {
        char  id_name[500];
        char * data_type;
        char * type;
        int id_numar;
        int elem_vect[10];
        int nr_elemente;
        int intval;
        char* parametri[5];
        int nr_parametri;
        float floatval;
        char charval;
        char boolval[10];
    } symbol_table[300];
    int cauta_simbol(char []);
    int var_declarata(char []);
    void verifica_par(int ,int,char);
    void functie_def(char[]);
    void print_fun(int);
    void adauga_simbol(char,char[]);
    void insert_type();
    int count=0;
    int id_op=1;
    int cnt,cnt2;
    int rez,ord,ord2,rez2,rez3;
    int id_parametru;
    int s;
    int elemente_vect,nr_elemente;
    int nr_functie;
    char valoare;
    char type[15];
    char return_type[15];
    extern int nr_linii;

    struct node { 
	struct node *left; 
	struct node *right; 
    int intval;
	char token[30];
    };
    void insert_type();
    void printtree(struct node*);
    void printInorder(struct node*);
    int evalAST(struct node*);
    struct node* buildAST(struct node *left, struct node *right, char root[],int value);
    struct node* head;
%}

%union {
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
}
%token <nd_obj>  PRINT  GLOBAL FUNCTIONS MAIN PRINTF
%token <nd_obj> INT BOOL
%token <nd_obj> FLOAT
%token <nd_obj> CHAR
%token <nd_obj> STRING
%token <nd_obj> EVAL
%token <nd_obj> RETURN FOR WHILE DO IF_ELSE VOID  FUNCTION IF ELSE CALL VECTOR ATRR
%token <nd_obj>  NUMAR TYPEOF
%token <nd_obj>  NUMAR_REAL
%token <nd_obj> ID SIR_CAR 
%token <nd_obj> CARACTER
%right<nd_obj> ATR ADUNARE_ATR SCADERE_ATR INMULTIRE_ATR DIV_ATR MOD_ATR TRUE_FALSE 
%left<nd_obj> ',' '[' ']' '(' ')' '!' ';' DIFERIT '$'
%token<nd_obj> '}' '{' '~'
%left<nd_obj> AND OR NOT 
%left<nd_obj> EGALITATE GT GE LT LE 
%left<nd_obj> ADUNARE SCADERE INMULTIRE DIV MODULO
%left<nd_obj> INCREMENTARE DECREMENTARE
%type<nd_obj>  op_artm_unare value variabila variabila_glob evaluare  array afisari for_loop 
%type<nd_obj> var_globale blocFunctii  blocMain str_control stm_body structtype return function_call
%type<nd_obj> cond_bool functie  declarare_par declarari_func declarari_var_glob datatype_f datatype  if_then_else bloc bloc1
%type <nd_obj> op_ord1_int op_ord2_int operand_int
%type <nd_obj> op_ord1_float op_ord2_float operand_float
%start start
%%
start: var_globale blocFunctii blocMain
;

blocMain: MAIN '{' stm_body RETURN ';' '}'
| MAIN ';'
;

str_control: structtype '(' cond_bool ')' '{' stm_body '}' ';'
;
structtype: IF 
| WHILE 
;
blocFunctii: FUNCTIONS '{' declarari_func '}' 
| FUNCTIONS ';'
;

declarari_func: FUNCTION functie ';' 
| FUNCTION functie ';' declarari_func
;

functie: datatype_f ID {nr_functie=count;id_parametru=0;adauga_simbol('f',$2.name);}  '(' parametri ')' bloc 
| VOID {insert_type();} ID {nr_functie=count;id_parametru=0;adauga_simbol('f',$3.name);} '(' parametri ')' bloc1
;
bloc1: '{' stm_body '}' 
;
bloc : '{' stm_body  RETURN return '}'
return : NUMAR  {if(strcmp("int",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }} ';'
|  ID {rez=cauta_simbol($1.name); if(rez!=-1){if(strcmp(symbol_table[rez].data_type,symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}
                                else {printf("variabila %s nu a fost declarata",symbol_table[rez].id_name);exit(1);}} ';'
|  NUMAR_REAL {if(strcmp("float",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }} ';'
| CARACTER {if(strcmp("char",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}';'
| ';' {if(strcmp(symbol_table[nr_functie].data_type,"void")!=0) {printf("Functia nu e de tip 'void' "); exit(1);}}
;
parametri: declarare_par
| declarare_par ',' parametri 
| 
;

declarare_par: datatype ID {adauga_simbol('p',$2.name);}
| datatype ID  '=' {adauga_simbol('p',$2.name);} value 
;

var_globale: GLOBAL '{' declarari_var_glob '}'
| GLOBAL ';'
;

declarari_var_glob: variabila_glob ';'
| variabila_glob ';'  declarari_var_glob
;

variabila_glob : datatype ID  {adauga_simbol('g',$2.name);} 
| datatype  array
| datatype ID {adauga_simbol('g',$2.name);}  ATR value
;

array: VECTOR  {nr_elemente=$1.intval;adauga_simbol('a',$1.strval);elemente_vect=0;} ATR '{' elemente '}' {if(elemente_vect>nr_elemente){printf("Dimensiunea vectorul '%s' a fost depasita\n",$1.strval);exit(1);}}
;

elemente: NUMAR {if(strcmp(symbol_table[count-1].data_type,"int")!=0){printf("Al %d-lea element al vectorului '%s' are tip diferit de date \n",elemente_vect+1,symbol_table[count-1].id_name);exit(1);}
                            ++elemente_vect;symbol_table[count-1].elem_vect[elemente_vect]=($1.intval);}
| NUMAR {if(strcmp(symbol_table[count-1].data_type,"int")!=0){printf("Al %d -lea element al vectorului '%s' are tip diferit de date \n",elemente_vect+1,symbol_table[count-1].id_name);exit(1);}
    ++elemente_vect;symbol_table[count-1].elem_vect[elemente_vect]=($1.intval);} ',' elemente
|
;

datatype_f : INT {insert_type();}
| FLOAT {insert_type();}
| CHAR {insert_type();}
;


variabila : datatype ID  {adauga_simbol('v',$2.name);} 
| datatype   array
| datatype ID {adauga_simbol('v',$2.name);} ATR value 
| ID ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[cauta_simbol($1.name)].intval=$3.intval;printf("\n\n");
	                                            printf("\t\t\t\t\t\t AST \n\n");
	                                            printtree(head); 
                                                printf("Valoarea expresiei: %d\n", $3.intval);
                                                head=NULL;}
	                                           
| ID ATRR op_ord1_float {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].floatval=$3.realval;}
| ID ADUNARE_ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].intval += $3.intval;printf("\n\n");
	                                            printf("\t\t\t\t\t\t AST \n\n");
	                                            printtree(head); 
	                                           printf("Valoarea expresiei: %d\n", $3.intval);
                                               head=NULL;}
| ID SCADERE_ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].intval -= $3.intval;
                                             printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", $3.intval);
                                            head=NULL;}
	                                       
| ID INMULTIRE_ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].intval *= $3.intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", $3.intval);
                                            head=NULL;}
	                                       
| ID DIV_ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].intval /= $3.intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", $3.intval);
                                            head=NULL;}
	                                       
| ID MOD_ATR op_ord1_int {rez3=cauta_simbol($1.name);if(rez3!=-1)symbol_table[rez3].intval %= $3.intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", $3.intval);
                                            head=NULL;}
	                                        
| ID op_artm_unare {if(rez=cauta_simbol($1.name)!=-1)symbol_table[rez].intval++;}
| VECTOR {rez=var_declarata($1.strval);if($1.intval>symbol_table[rez].nr_elemente){printf("Elementul '%s' nu exista",$1.name);exit(1);}} ATR op_ord1_int{ 
                                            symbol_table[rez].elem_vect[$1.intval] = $4.intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", $4.intval);
                                            head=NULL;}
| op_ord1_int
| ID ATR TRUE_FALSE {rez3=cauta_simbol($1.name);if(rez3!=-1)strcpy(symbol_table[rez3].boolval , $3.boolval);}
;


op_ord1_int: op_ord1_int ADUNARE op_ord2_int {$$.intval = $1.intval + $3.intval;$$.nd=buildAST($1.nd,$3.nd,$2.name,$$.intval); head=$$.nd;}
| op_ord1_int SCADERE op_ord2_int {$$.intval = $1.intval - $3.intval;$$.nd=buildAST($1.nd,$3.nd,$2.name,$$.intval); head=$$.nd;}
| op_ord2_int {$$.intval = $1.intval;}
;

op_ord2_int: op_ord2_int INMULTIRE operand_int {$$.intval = $1.intval * $3.intval;$$.nd=buildAST($1.nd,$3.nd,$2.name,$$.intval); head=$$.nd;}
| op_ord2_int DIV operand_int {$$.intval = $1.intval / $3.intval;$$.nd=buildAST($1.nd,$3.nd,$2.name,$$.intval); head=$$.nd;}
| op_ord2_int MODULO operand_int {$$ .intval= $1.intval % $3.intval;$$.nd=buildAST($1.nd,$3.nd,$2.name,$$.intval); head=$$.nd;}
| operand_int {$$.intval = $1.intval;}
;

operand_int: '(' op_ord1_int ')' {$$.intval = $2.intval;}
| ID {rez=cauta_simbol($1.name);if(rez!=-1) if(strcmp(symbol_table[rez].data_type,"int") == 0) 
       { $$.intval = symbol_table[rez].intval; $$.nd=buildAST(NULL,NULL,$1.name,symbol_table[rez].intval); head=$$.nd;}
       else {printf("The type of variable %s is not int, ", $1.name); yyerror ("semantic error");}}
| NUMAR {$$ .intval= $1.intval;$$.nd=buildAST(NULL,NULL,$1.name,$1.intval); head=$$.nd;}
| VECTOR {rez=var_declarata($1.strval);if($1.intval>symbol_table[rez].nr_elemente){printf("Elementul '%s' nu exista",$1.name);exit(1);}$$.intval = symbol_table[rez].elem_vect[$1.intval];$$.nd=buildAST(NULL,NULL,$1.name,$$.intval); head=$$.nd;}
| NUMAR_REAL {printf("The type of constant %s is float, ", $1.name); yyerror ("semantic error");} 
| function_call { if(strcmp(symbol_table[ord].data_type,"int") == 0) 
       { $$.intval = symbol_table[rez].intval; $$.nd=buildAST(NULL,NULL,$1.name,0); head=$$.nd;}
       else {printf("The type of function %s is not int, ", $1.name); yyerror ("semantic error");}}
;

op_ord1_float: op_ord1_float ADUNARE op_ord2_float {$$.realval = $1.realval + $3.realval;}
| op_ord1_float SCADERE op_ord2_float {$$.realval = $1.realval - $3.realval;}
| op_ord2_float {$$.realval = $1.realval;}
;

op_ord2_float: op_ord2_float INMULTIRE operand_float {$$ .realval= $1.realval * $3.realval;}
| op_ord2_float DIV operand_float {$$.realval = $1.realval / $3.realval;}
| operand_float {$$.realval = $1.realval;}
;


operand_float: '(' op_ord1_float ')' {$$ .realval= $2.realval;}
| ID {rez=cauta_simbol($1.name) ;if(rez!=-1) if(strcmp(symbol_table[rez].data_type,"float") == 0) 
        $$.realval = symbol_table[rez].floatval; 
       else {printf("The type of variable %s is not float, ", $1.name); yyerror ("semantic error");}}
| NUMAR_REAL {$$ .realval= $1.realval;}
| NUMAR {printf("The type of constant %s is int, ", $1.name); yyerror ("semantic error");}
;
 

datatype: INT {insert_type();}
| FLOAT {insert_type();}
| CHAR {insert_type();}
| BOOL {insert_type();}
;

value: NUMAR {symbol_table[count-1].intval=$1.intval;}
| NUMAR_REAL {symbol_table[count-1].floatval=$1.realval;}
| CARACTER {symbol_table[count-1].charval=$1.charval;}
| TRUE_FALSE {strcpy(symbol_table[count-1].boolval,$1.boolval);}
;

for_loop: FOR '(' ID ATR value ',' cond_bool ',' ID op_artm_unare ')' '{' stm_body '}'';';

if_then_else: IF_ELSE '(' cond_bool ')' '{' stm_body '}' ';'
| IF_ELSE '(' cond_bool ')' '{' stm_body '}' else 
;
else : ELSE '{' stm_body '}' ';' 
;
cond_bool: cond_bool AND cond_bool
| cond_bool OR cond_bool
| op_ord1_int EGALITATE op_ord1_int
| op_ord1_int DIFERIT op_ord1_int
| op_ord1_int LT op_ord1_int
| op_ord1_int GT op_ord1_int
| op_ord1_int LE op_ord1_int
| op_ord1_int GE op_ord1_int
;

op_artm_unare: INCREMENTARE
| DECREMENTARE;


stm_body: variabila ';'
| variabila ';' stm_body
| function_call ';'
| function_call ';' stm_body
| if_then_else
| str_control
| if_then_else stm_body
| str_control stm_body
| evaluare ';'
| evaluare ';' stm_body
| for_loop
| for_loop  stm_body
| afisari
;

afisari: PRINT op_ord1_int ';' {printf("Valoarea expresiei: %d\n", $2.intval);}
| PRINT op_ord1_int ';' stm_body {printf("Valoarea expresiei: %d\n", $2.intval);}
| PRINTF op_ord1_float ';' {printf("Valoarea expresiei: %f\n", $2.realval);}
| PRINTF op_ord1_float ';' stm_body {printf("Valoarea expresiei: %f\n", $2.realval);}
| PRINT '(' text ')' ';'
| PRINT '(' text ')' ';' stm_body
;




evaluare: EVAL '(' variabila')' {printf("\n\n");
	printf("\t\t\t\t\t\t AST \n\n");
	printtree(head); 
	printf("\n");}
| TYPEOF '(' op_ord1_int ')' {printf("Valoarea expresiei: %s\n", "int");}
| TYPEOF '(' '~' op_ord1_float ')'  {printf("Valoarea expresiei: %s\n", "float");}
;

text: SIR_CAR {printf("%s\n",$1.strval);}
| '$' ID {rez=cauta_simbol($2.name);if(rez!=-1)print_fun(rez); else {printf("variabila %s nu exista\n",$2.name);exit(1);}}
;


function_call:  CALL ID {ord=cauta_simbol($2.name);if(ord!=-1) cnt=0; else {printf("functia %s nu exista\n",$2.name); exit(1);}} '(' f_parametri ')' {if(cnt<symbol_table[ord].nr_parametri){printf("parametri insuficienti\n");exit(1);}
                                                                                    else
                                                                        if(cnt>symbol_table[ord].nr_parametri){printf("PREA MULTI PARAMETRI %s\n",symbol_table[ord].id_name);exit(1);}}
;
f_parametri : '~' ID {rez=cauta_simbol($2.name);if(rez!=-1){ verifica_par(rez,ord,'p');}else {printf("varibila %s nu exista\n",$2.name);exit(1);}}
| '~' ID ',' {rez=cauta_simbol($2.name);if(rez!=-1){ verifica_par(rez,ord,'p');}else {printf("varibila %s nu exista\n",$2.name);exit(1);}} f_parametri
| function_call_p
| function_call_p ',' f_parametri
| variabila {++cnt;} 
| variabila {++cnt;}',' f_parametri
;



function_call_p:'~' CALL  ID {rez=cauta_simbol($3.name);verifica_par(rez,ord,'p');ord2=cauta_simbol($3.name);cnt2=0;} '(' f_parametri2 ')' {if(cnt2<symbol_table[ord2].nr_parametri){printf("parametri insuficienti\n");exit(1);}
                                                                                    else
                                                                        if(cnt2>symbol_table[ord2].nr_parametri){printf("PREA MULTI PARAMETRI %s\n",symbol_table[ord2].id_name );exit(1);}}
f_parametri2 :'~' ID {rez=cauta_simbol($2.name);verifica_par(rez,ord,'s');}
| '~' ID ',' {rez=cauta_simbol($2.name);verifica_par(rez,ord,'s');} f_parametri2
| variabila {++cnt2;}
| variabila ',' {++cnt2;} f_parametri2
;
%%
int main(int argc, char** argv)
{

    // to do::: de recunoscut a[2];
    FILE *f1,*f2;
    yyin = fopen("input_gresit.txt","r");
    yyparse();
    f1=fopen("symbol_table.txt","w");
    f2=fopen("symbol_table_functions.txt","w");
    fprintf(f1,"\n\n");
    fprintf(f2,"\n\n");
	fprintf(f1,"\t\t\t\t\t\t\t\t SYMBOL TABLE \n\n");
    fprintf(f2,"\t\t\t\t\t\t\t\t SYMBOL TABLE \n\n");
	fprintf(f1,"\nID   DATATYPE   TYPE   VALUE \n");
	fprintf(f1,"_______________________________________\n\n");

    fprintf(f2,"\nID   DATATYPE   TYPE   \n");
	fprintf(f2,"_______________________________________\n\n");
    for(int i=0;i<count;i++)
    {
        char s[20];
        if(strcmp(symbol_table[i].data_type,"int")==0)
        sprintf(s,"%d",symbol_table[i].intval);
        if(strcmp(symbol_table[i].data_type,"char")==0)
        sprintf(s,"%c",symbol_table[i].charval);
        if(strcmp(symbol_table[i].data_type,"float")==0)
        sprintf(s,"%f",symbol_table[i].floatval);
        if(strcmp(symbol_table[i].data_type,"bool")==0)
        sprintf(s,"%s",symbol_table[i].boolval);
        if(strcmp(symbol_table[i].type,"FUNCTIE")!=0 && strstr(symbol_table[i].type,"PARAMETRUL FUNCTIEI")==NULL)
        fprintf(f1,"%s\t%s\t%s\t%s\n",symbol_table[i].id_name,symbol_table[i].data_type,symbol_table[i].type,s);
            else
        fprintf(f2,"%s\t%s\t%s\t\n",symbol_table[i].id_name,symbol_table[i].data_type,symbol_table[i].type);
    }
    for(int i=0;i<count;i++) {
		bzero(symbol_table[i].id_name,500);
		bzero(symbol_table[i].type,sizeof(symbol_table[i].type));
        bzero(symbol_table[i].data_type,sizeof(symbol_table[i].data_type));
        bzero(symbol_table[i].parametri,sizeof(symbol_table[i].parametri));
        bzero(symbol_table[i].elem_vect,sizeof(symbol_table[i].elem_vect));

	}
    printf("programul a fost compilat cu succes\n");
    return 0;
}
void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,nr_linii);
exit(3);
}
void insert_type()
{
    strcpy(type,yytext);
}

void adauga_simbol(char c,char simbol[])
{
    s=cauta_simbol(simbol);
    if(s==-1 || (s!=-1 && strstr(symbol_table[s].type,"PARAMETRUL")!=NULL))
    {
        if(c=='v')
        {
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VARIABILA LOCALA");
            symbol_table[count].id_numar=count;
            ++count;
        }
        if(c=='f')
        {
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("FUNCTIE");
            symbol_table[count].nr_parametri=0;
            symbol_table[count].id_numar=count;
            ++count;
        }
        if(c=='g')
        {

            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VARIABILA GLOBALA");
            symbol_table[count].id_numar=count;
            ++count;
        }
         if(c=='p')
        {
            char s[550];
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            sprintf(s,"PARAMETRUL FUNCTIEI %s",symbol_table[nr_functie].id_name);
            symbol_table[nr_functie].parametri[id_parametru]=strdup(type);
            symbol_table[count].type=strdup(s);
            ++symbol_table[nr_functie].nr_parametri;
            symbol_table[count].id_numar=count;
            ++count;
            ++id_parametru;
        }
        if(c=='a')
        {

            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VECTOR");
            symbol_table[count].id_numar=count;
            symbol_table[count].nr_elemente=nr_elemente;
            ++count;
        }
    }
    else
    {
        if(c=='f')
        printf("REDEFINIRE FUNCTIE\n");
        else
        printf("REDEFINIRE VARIABILA\n");
        exit(1);
    }
}
void verifica_par(int id_par,int ord,char tip)
{
    //printf("%s  %s\n",symbol_table[id_par].data_type,symbol_table[id_par].id_name);
    //printf("%s\n",symbol_table[ord].parametri[cnt]);
    if(cnt< symbol_table[ord].nr_parametri && strcmp(symbol_table[id_par].data_type,symbol_table[ord].parametri[cnt])!=0 && tip=='p')
    {
        printf("Tipul parametrului %s este incorent\n",symbol_table[id_par].id_name);
        exit(1);
    }
    if(cnt2< symbol_table[ord].nr_parametri && strcmp(symbol_table[id_par].data_type,symbol_table[ord].parametri[cnt2])!=0 && tip=='s')
    {
        printf("Tipul parametrului %s este incorent\n",symbol_table[id_par].id_name);
        exit(1);
    }
    if(tip=='p')
    ++cnt;
    else
    ++cnt2;
}
void functie_def(char functie[])
{
    int ok=0;
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,functie)==0)
        {
            ok=1;
            break;
        }
    }
    if(ok==0)
    {
        printf("functia %s nu a fost definita\n",functie);
        exit(1);
    }
}
int var_declarata(char var[])
{
    int ok=0;
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,var)==0)
        {
            ok=1;
            return symbol_table[i].id_numar;
            break;
        }
    }
    if(ok==0)
    {
        printf("linia %d : varibila %s nu a fost declarata\n",nr_linii,var);
        return -1;
        exit(1);
    }
}

int cauta_simbol(char nume[])
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,nume)==0)
        {
            return symbol_table[i].id_numar; // s-a gasit simbolul in tabel
            break;
        }
    }
    return -1;
}
void print_fun(int id)
{
    if(strcmp(symbol_table[id].data_type,"int")==0)
    printf("%d\n",symbol_table[id].intval);

    if(strcmp(symbol_table[id].data_type,"char")==0)
    printf("%c\n",symbol_table[id].charval);

    if(strcmp(symbol_table[id].data_type,"float")==0)
    printf("%f\n",symbol_table[id].floatval);
    
}

struct node* buildAST(struct node *left, struct node *right, char root[],int value) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(root)+1);
	strcpy(newstr, root);
	newnode->left = left;
	newnode->right = right;
	strcpy(newnode->token , newstr);
    newnode->intval=value;
	return(newnode);
}
void printtree(struct node* tree) {
	printf("\n\n Parcurgerea in inordine AST: \n\n");
	printInorder(tree);
	printf("\n\n");
    free(tree);
}
void printInorder(struct node* tree) {
	if (tree)
    {
		printInorder(tree->left);
        printf("%s: ",tree->token);
        printf("%d\n", evalAST(tree));


        //if(tree->left!=NULL && tree->right!=NULL)
        //printf("stanga : %s , dreapta: %s \n",tree->left->token,tree->right->token);


		printInorder(tree->right);
	}
}
int evalAST(struct node* nod)
{
    if(nod->left==NULL && nod->right==NULL)
    {
        return nod->intval;
    }
    else
    return -1;
}