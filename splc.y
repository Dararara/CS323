%{
    #include "APT.h"
    #include "lex.yy.c"
    FILE* FILE_OUT;
    int errors = 0;
    #define MISSING_RP_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing parenthesis ')'\n", e->lineno);\
    }
    #define MISSING_SEMI_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT, "Error type B at Line %d: Missing semicolon ';'\n", e->lineno);\
    }
     #define MISSING_COMMA_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT, "Error type B at Line %d: Missing comma ','\n", e->lineno);\
    }
    #define MISSING_RB_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing ']'\n", e->lineno);\
    }
    #define MISSING_RC_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing '}'\n", e->lineno);\
    }
    #define MISSING_RQ_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing '\n", e->lineno);\
    }
        
    void yyerror(const char*);
%}
%union{
    Node* Node;
}

%token  <Node> INT 
%token  <Node> HEX_INT
%token  <Node> FLOAT  
%token  <Node> CHAR    
%token  <Node> ID      
%token  <Node> TYPE    // int | float | char
%token  <Node> STRUCT  // struct
%token  <Node> IF      // if
%token  <Node> ELSE    // else
%token  <Node> WHILE   // while
%token  <Node> RETURN  // return
%token  <Node> DOT     // .
%token  <Node> SEMI    // ;
%token  <Node> COMMA   // ,
%token  <Node> ASSIGN  // =
%token  <Node> LT      // <
%token  <Node> LE      // <=
%token  <Node> GT      // >
%token  <Node> GE      // >=
%token  <Node> NE      // !=
%token  <Node> EQ      // ==
%token  <Node> PLUS    // +
%token  <Node> MINUS   // -
%token  <Node> MUL     // *
%token  <Node> DIV     // /
%token  <Node> AND     // &&
%token  <Node> OR      // ||
%token  <Node> NOT     // !
%token  <Node> LP      // (
%token  <Node> RP      // )
%token  <Node> LB      // [
%token  <Node> RB      // ]
%token  <Node> LC      // {
%token  <Node> RC      // }
%token  <Node> ERROR
%token  <Node> WRONG_CHAR

%type <Node> Program ExtDefList ExtDef ExtDecList;
%type <Node> Specifier StructSpecifier;
%type <Node> VarDec FunDec VarList ParamDec;
%type <Node> CompSt StmtList Stmt;
%type <Node> DefList Def DecList Dec;
%type <Node> Exp Args;
 
%right ASSIGN

%left OR
%left AND
%left LT LE GT GE NE EQ
%left PLUS MINUS
%left MUL DIV

%right NOT

%left LP RP LB RB DOT



%%


Program:
        ExtDefList{
            $$ = createAPTNode("Program", 1, $1);
            if(errors == 0)
                printTree($$, 0, FILE_OUT);
        }
        ;

ExtDefList:
        ExtDef ExtDefList {$$ = createAPTNode("ExtDefList", 2, $1, $2); }
        |  {$$ = createAPTNode("Epsilon", -1); }
        ;

ExtDef:
        Specifier ExtDecList SEMI {$$ = createAPTNode("ExtDef", 3, $1, $2, $3); }
        | Specifier SEMI {$$ = createAPTNode("ExtDef", 2, $1, $2); }
        | Specifier FunDec CompSt {$$ = createAPTNode("ExtDef", 3, $1, $2, $3); }
        | Specifier error {
            {$$ = createAPTNode("ExtDef", 1, $1); }
            MISSING_SEMI_ERROR($1);
        }
        | Specifier ExtDecList error{
            {$$ = createAPTNode("ExtDef", 2, $1, $2); }
        }
        ;

ExtDecList:
        VarDec {$$ = createAPTNode("ExtDecList", 1, $1); }
        | VarDec COMMA ExtDecList {$$ = createAPTNode("ExtDecList", 3, $1, $2, $3); }
        
        // | VarDec error ExtDecList{
        //    errors++;
        //    {$$ = createAPTNode("ExtDecList", -1);}
        //    printf("get it");
        //}
        ;


Specifier:
        TYPE {$$ = createAPTNode("Specifier", 1, $1); }
        | StructSpecifier {$$ = createAPTNode("Specifier", 1, $1); }
        ;

StructSpecifier:
        STRUCT ID LC DefList RC {$$ = createAPTNode("StructSpecifier", 5, $1, $2, $3, $4, $5); }
        | STRUCT ID {$$ = createAPTNode("StructSpecifier", 2, $1, $2); }
        | STRUCT ID LC DefList error{
            errors++;
            $$ = createAPTNode("StructSpecifier", 4, $1, $2, $3, $4); 
            MISSING_RC_ERROR($4);
        }
        ;

VarDec:
        ID {$$ = createAPTNode("VarDec", 1, $1); }
        | VarDec LB INT RB {$$ = createAPTNode("VarDec", 4, $1, $2, $3, $4); }
        | VarDec LB HEX_INT RB {$$ = createAPTNode("VarDec", 4, $1, $2, $3, $4); }
        | ERROR {
            errors++;
            $$ = createAPTNode("VarDec", 1, $1); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", $1->lineno, $1->content);

        }
        | VarDec LB INT error{
            errors++;
            $$ = createAPTNode("VarDec", 3, $1, $2, $3); 
            MISSING_RB_ERROR($3);
        }
        | VarDec LB HEX_INT error{
            errors++;
            $$ = createAPTNode("VarDec", 3, $1, $2, $3); 
            MISSING_RB_ERROR($3);
        }
        
        ;

FunDec:
        ID LP VarList RP {$$ = createAPTNode("FunDec", 4, $1, $2, $3, $4); }
        | ID LP RP {$$ = createAPTNode("FunDec", 3, $1, $2, $3); }
        | ID LP VarList error{
            {$$ = createAPTNode("FunDec", 3, $1, $2, $3); }
            MISSING_RP_ERROR($3);
        }
        | ID LP error{
            {$$ = createAPTNode("FunDec", 2, $1, $2); }
            MISSING_RP_ERROR($2);
        }
        
        ;

VarList:
        ParamDec COMMA VarList {$$ = createAPTNode("VarList", 3, $1, $2, $3); }
        | ParamDec {$$ = createAPTNode("VarList", 1, $1); }
        | ParamDec error VarList {
            {$$ = createAPTNode("VarList", 2, $1, $3); }
            errors++;
            MISSING_COMMA_ERROR($1);
        } 
        ;
ParamDec:
        Specifier VarDec {$$ = createAPTNode("ParamDec", 2, $1, $2); }
        ;


CompSt:
        LC DefList StmtList RC {$$ = createAPTNode("CompSt", 4, $1, $2, $3, $4); }
        | LC DefList StmtList error{
            errors++;
            $$ = createAPTNode("CompSt", 3, $1, $2, $3); 
            MISSING_RC_ERROR($3);
        }
        ;

StmtList:
        Stmt StmtList {$$ = createAPTNode("StmtList", 2, $1, $2); }
        | {$$ = createAPTNode("Epsilon", -1); }
        ;

Stmt: 
        Exp SEMI {$$ = createAPTNode("Stmt", 2, $1, $2); }
        | CompSt {$$ = createAPTNode("Stmt", 1, $1); }
        | RETURN Exp SEMI {$$ = createAPTNode("Stmt", 3, $1, $2, $3); }
        | IF LP Exp RP Stmt {$$ = createAPTNode("Stmt", 5, $1, $2, $3, $4, $5); }
        | IF LP Exp RP Stmt ELSE Stmt {$$ = createAPTNode("Stmt", 7, $1, $2, $3, $4, $5, $6, $7); }
        | WHILE LP Exp RP Stmt {$$ = createAPTNode("Stmt", 5, $1, $2, $3, $4, $5); }
        | Exp error {
            {$$ = createAPTNode("Stmt", 1, $1); }
            MISSING_SEMI_ERROR($1);
        }
        | RETURN Exp error {
            {$$ = createAPTNode("Stmt", 1, $1); }
            MISSING_SEMI_ERROR($2);
        }
        | IF LP Exp error Stmt {
            {$$ = createAPTNode("Stmt", 1, $1); }
            MISSING_RP_ERROR($3);
        }
        | IF LP Exp error Stmt ELSE Stmt{
            {$$ = createAPTNode("Stmt", 1, $1); }
            MISSING_RP_ERROR($3);
        }
        | WHILE LP Exp error Stmt {
            $$ = createAPTNode("Stmt", 1, $1);
            MISSING_RP_ERROR($3); 
        }
        
        ;

DefList:
        Def DefList {$$ = createAPTNode("DefList", 2, $1, $2); }
        |  {$$ = createAPTNode("Epsilon", -1); }
        ;

Def:
        Specifier DecList SEMI {$$ = createAPTNode("Def", 3, $1, $2, $3); }
        | Specifier DecList error {
            {$$ = createAPTNode("Def", 2, $1, $2); }
            MISSING_SEMI_ERROR($1);
        }
        ;

DecList:
        Dec {$$ = createAPTNode("DecList", 1, $1); }
        | Dec COMMA DecList {$$ = createAPTNode("DecList", 3, $1, $2, $3); }
        ;

Dec:
        VarDec {$$ = createAPTNode("Dec", 1, $1); }
        | VarDec ASSIGN Exp {$$ = createAPTNode("Dec", 3, $1, $2, $3); }
    ;

Exp:
        Exp ASSIGN Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp AND Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp OR Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp LT Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp LE Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp GT Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp GE Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp NE Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp EQ Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp PLUS Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp MINUS Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp MUL Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp DIV Exp {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | LP Exp RP {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | MINUS Exp {$$ = createAPTNode("Exp", 2, $1, $2); }
        | NOT Exp {$$ = createAPTNode("Exp", 2, $1, $2); }
        | ID LP Args RP {$$ = createAPTNode("Exp", 4, $1, $2, $3, $4); }
        | ID LP RP {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | Exp LB Exp RB {$$ = createAPTNode("Exp", 4, $1, $2, $3, $4); }
        | Exp DOT ID {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
        | ID {$$ = createAPTNode("Exp", 1, $1); }
        | INT {$$ = createAPTNode("Exp", 1, $1); }
        | HEX_INT {$$ = createAPTNode("Exp", 1, $1); }
        | FLOAT {$$ = createAPTNode("Exp", 1, $1); }
        | CHAR {$$ = createAPTNode("Exp", 1, $1); }
        | Exp ERROR Exp {
            errors++;
            $$ = createAPTNode("Exp", 3, $1, $2, $3); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", $2->lineno, $2->content);

        }
        | ERROR {
            errors++;
            $$ = createAPTNode("Epsilon", -1); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", $1->lineno, $1->content);
        }
        
        | LP Exp error {
            {$$ = createAPTNode("Exp", 2, $1, $2); }
            MISSING_RP_ERROR($2);
        }
        | ID LP Args error{
            {$$ = createAPTNode("Exp", 3, $1, $2, $3); }
            MISSING_RP_ERROR($3);
        }
        
        | ID LP error {
            {$$ = createAPTNode("Exp", 2, $1, $2); }
            MISSING_RP_ERROR($2);
        }
        | Exp LB Exp error {
            errors++;
            $$ = createAPTNode("Exp", 1, $1); 
            MISSING_RB_ERROR($3);
        }
        | WRONG_CHAR{
            errors++;
            $$ = createAPTNode("Exp", 1, $1);
            MISSING_RQ_ERROR($1);
        }
        ;

Args: Exp COMMA Args {$$ = createAPTNode("Args", 3, $1, $2, $3); }
        | Exp {$$ = createAPTNode("Args", 1, $1); }
      
        ;

%%

void yyerror(char const* s){

}
int main(int argc, char** argv){
    if(argc == 2){

        int file_len = strlen(argv[1]);
        char* output_file_name = (char*)malloc(sizeof(char) * (file_len + 3));
        strcpy(output_file_name, argv[1]);
        output_file_name[file_len-3] = 'o';
        output_file_name[file_len-2] = 'u';
        output_file_name[file_len-1] = 't';
        output_file_name[file_len] = '\0';
        //printf("%s\n", output_file_name);
        FILE_OUT = fopen(output_file_name, "w");

    }
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}

