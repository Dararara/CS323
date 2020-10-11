#ifndef APT_H
#define APT_H
#include <stdio.h>
extern char* yytext;
typedef struct Node{
    int lineno;
    char* name;
    char* content;
    int child_num;
    struct Node** childs;
    union{
        int value_int;
        float value_float;
        char* value_str;
    };
    int is_token;
} Node;

Node* createAPTNode(char* name, int cnt, ...);
Node* createAPTLeaf(char* name, int lineno, char* content);
void printTree(Node* root, int indent, FILE* fout);

#endif