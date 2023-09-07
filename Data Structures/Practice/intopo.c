#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int top;
    int size;
    char *arr;
};

int stacktop(struct node * stak){
    return stak->arr[stak->top];
}

int empty_check (struct node *asset)
{
    if (asset->top == -1)
    {
        printf("The stack is empty, Underflow\n");
        return 0;
    }
    else return 1;
}

int full_check (struct node *asset) {
    if (asset->top == asset->size-1) {
        printf("The stack is full, overflow\n");
        return 1;
    }
    else return 0;
}

void push (struct node * asset, char val) {
    if (full_check(asset)) {
        printf("Stack cant now accept the newer values anymore, Try to empty next time!\n");
    }
    else {
        asset->top++;
        asset->arr[asset->top] = val;
    }
}

char pop (struct node * asset) {
    if (empty_check(asset)) {
        printf("Stack is already empty, Try to fill it next time!\n");
        return -1;
    }
    else {
        char data;
        data = asset->arr[asset->top];
        asset->top--;
        return data;
    }
}

int precedence (char data) {
    if (data == '+' || data == '-') 
       return 2;
    
    else if (data = '/' || data == '*')
       return 3;
}

int isOperator (char data) {
    if (data == '+' || data == '-' || data == '*' || data == '/') {
        return 1;
    }
    else return 0;
}

char *intopo (char * infix) {
    struct node *sp = (struct node *) malloc (sizeof(struct node));
    sp->top = -1;
    sp->size = 6;
    sp->arr = (char *) malloc (sp->size*sizeof(char));
    char *postfix = (char *) malloc (sizeof(char));
    int i = 0;
    int j = 0;

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else {
            if (precedence(infix[i]) >precedence (stacktop(sp))) {
                push (sp, infix[i]);
                i++;
            }
            else {
                postfix[j] = pop (sp);
                j++;
            }
        }
    }
    while (!empty_check(sp)) {
        postfix[j] = pop (sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main ()
{
    char * infix = "x-y/z+k*d";
    printf("Postfix is %s", intopo(infix));
    return 0;
}