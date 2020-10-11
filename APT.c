#include "APT.h"
#include <stdio.h>
#include <stdarg.h>
#include<string.h>
#include<stdlib.h>
Node* createAPTNode(char* name, int cnt, ...){
    Node* node = (Node*)malloc(sizeof(Node));
    node->name = name;
    node->childs = NULL;
    node->is_token = 0;
    
    
    va_list childs;
    if(cnt < 0) return node; // fault
    va_start(childs, cnt);
    node->childs = (Node**)malloc(sizeof(Node*) * cnt);
    
    node->child_num = cnt;
    Node* child = va_arg(childs, Node*);
    node->childs[0] = child;
    node->lineno = child->lineno;
    for(int i = 1; i < cnt; i++){
        node->childs[i] = va_arg(childs, Node*);
    }
    va_end(childs);
    return node;
}

Node* createAPTLeaf(char* name, int lineno, char* content){
    Node* node = (Node*)malloc(sizeof(Node));
    node->lineno = lineno;
    node->name = name;
    node->content = (char*)malloc(sizeof(char) * strlen(content));
    strcpy(node->content, content);
    node->childs = NULL;
    node->is_token = 1;
    node->child_num = 0;

    // printf("<%s, L%d>: %s\n", name, lineno, yytext);
    // equal return 0
    if(strcmp(node->name, "INT") == 0){
        node->value_int = atoi(yytext);
    }
    else if(strcmp(node->name, "HEX_INT") == 0){
        node->name = "INT";
        node->value_int = strtol(yytext, NULL, 16);
    }
    else if(strcmp(node->name, "FLOAT") == 0){
        node->value_float = atof(yytext);
    }
    else {
        char* temp = (char*)malloc(sizeof(char) * strlen(yytext));
        strcpy(temp, yytext);
        node->value_str = temp;
    }
    //printf("%s\n", name);
    return node;

}

void printTree(Node* root, int indent, FILE* fout){
    
    if(root == NULL){
        return;
    }
    if(!strcmp(root->name, "Epsilon") || !strcmp(root->name, "epsilon")){
    }
    else {
        
        if(indent > 0) fprintf(fout, "%*c", indent * 2, ' ');
        fprintf(fout, "%s", root->name);
        if(root->lineno == -1){
            fprintf(fout, "\n");
            return;
        }
        if(!strcmp(root->name, "ID") 
            || !strcmp(root->name, "TYPE")
            ){
                fprintf(fout, ": %s", root->value_str);
            }
        else if( !strcmp(root->name, "CHAR")){
            
            fprintf(fout, ": %s", root->value_str);
        }
        else if(!strcmp(root->name, "INT")){
            fprintf(fout, ": %d", root->value_int);
        }
        else if(!strcmp(root->name, "FLOAT")){
            fprintf(fout, ": %f", root->value_float);
        }
        if(root->is_token == 0){
            fprintf(fout, " (%d)\n", root->lineno);
        }
        else{
            fprintf(fout, "\n");
        }
    }
    for(int i = 0; i < root->child_num; i++){
        printTree(root->childs[i], indent+1, fout);
    }

}