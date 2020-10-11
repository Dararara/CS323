%{
    #include <stdio.h>
    #include "splc.tab.h"
    #include "APT.h"

    #define CREATE_LEAF_NODE(NAME){\
        yylval.Node = createAPTLeaf(#NAME, yylineno, yytext);\
        return NAME;\
    }
    int chars = 0;
    int words = 0;
    int lines = 0;
    extern FILE* FILE_OUT;
%}
%option noyywrap
%option yylineno
INT ([+-]?[1-9][0-9]*)|([+-]?0)
HEX_INT ([+-]?0x[1-9a-fA-F][0-9a-fA-F]*)|([+-]?0)
WRONG_HEX_INT [+-]?0x[0-9a-zA-Z]+


FLOAT ({INT}\.[0-9]*)|(\.[0-9]+)
CHAR '(([ -~])|(\\x[0-9a-fA-F]{2}))'
WRONG_HEX_CHAR '\\x[0-9a-zA-Z]*'
WRONG_CHAR ('(([ -~])|(\\x[0-9a-fA-F]{2})))|('\\x[0-9a-zA-Z]*)

ID [a-zA-Z_][a-zA-Z_0-9]*
WRONG_ID [a-zA-Z_0-9]*

TYPE "int"|"float"|"char"

STRUCT "struct"
IF "if"
ELSE "else"
WHILE "while"
RETURN "return"
DOT "."
SEMI ";"
COMMA ","
ASSIGN "="
LT "<"
LE "<="
GT ">"
GE ">="
NE "!="
EQ "=="
PLUS "+"
MINUS "-"
MUL "*"
DIV "/"
AND "&&"
OR "||"
NOT "!"
LP "("
RP ")"
LB "["
RB "]"
LC "{"
RC "}"

COMMENT (\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*)


%%

[ \t\n] ;



{TYPE} CREATE_LEAF_NODE(TYPE);

{INT} {CREATE_LEAF_NODE(INT);}
{HEX_INT} {CREATE_LEAF_NODE(HEX_INT);}
{FLOAT} {CREATE_LEAF_NODE(FLOAT);}
{CHAR} {CREATE_LEAF_NODE(CHAR);}
{STRUCT} {CREATE_LEAF_NODE(STRUCT);}
{IF} {CREATE_LEAF_NODE(IF);}
{ELSE} {CREATE_LEAF_NODE(ELSE);}
{WHILE} {CREATE_LEAF_NODE(WHILE);}
{RETURN} {CREATE_LEAF_NODE(RETURN);}
{DOT} {CREATE_LEAF_NODE(DOT);}
{SEMI} {CREATE_LEAF_NODE(SEMI);}
{COMMA} {CREATE_LEAF_NODE(COMMA);}
{ASSIGN} {CREATE_LEAF_NODE(ASSIGN);}
{LT} {CREATE_LEAF_NODE(LT);}
{LE} {CREATE_LEAF_NODE(LE);}
{GT} {CREATE_LEAF_NODE(GT);}
{GE} {CREATE_LEAF_NODE(GE);}
{NE} {CREATE_LEAF_NODE(NE);}
{EQ} {CREATE_LEAF_NODE(EQ);}
{PLUS} {CREATE_LEAF_NODE(PLUS);}
{MINUS} {CREATE_LEAF_NODE(MINUS);}
{MUL} {CREATE_LEAF_NODE(MUL);}
{DIV} {CREATE_LEAF_NODE(DIV);}
{AND} {CREATE_LEAF_NODE(AND);}
{OR} {CREATE_LEAF_NODE(OR);}
{NOT} {CREATE_LEAF_NODE(NOT);}
{LP} {CREATE_LEAF_NODE(LP);}
{RP} {CREATE_LEAF_NODE(RP);}
{LB} {CREATE_LEAF_NODE(LB);}
{RB} {CREATE_LEAF_NODE(RB);}
{LC} {CREATE_LEAF_NODE(LC);}
{RC} {CREATE_LEAF_NODE(RC);}
{ID} {CREATE_LEAF_NODE(ID);}

{WRONG_HEX_INT} {
    
    CREATE_LEAF_NODE(ERROR);
}
{WRONG_HEX_CHAR} {
    CREATE_LEAF_NODE(ERROR);
}
{WRONG_CHAR} {
    CREATE_LEAF_NODE(WRONG_CHAR);
}
{WRONG_ID} {
    CREATE_LEAF_NODE(ERROR);
}

    /* multi-line comments */
{COMMENT} ;
<<EOF>> {
    return 0;
}

.   {
    CREATE_LEAF_NODE(ERROR);
}
