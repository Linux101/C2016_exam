#include <stdio.h>
#include <stdlib.h>
#include "include/my_stack.h"
#define STACK_SIZE 25

static int s_top=-1;
static int stack[STACK_SIZE];

int stack_capacity(){
    return STACK_SIZE;
}

int stack_size(){
    return STACK_SIZE - s_top - 1;
}

int stack_is_empty(){
    return s_top==-1;
}

int stack_is_full(){
    return s_top==STACK_SIZE-1;
}

void stack_push(int x){
    if(stack_is_full()){
        fputs("Stack is full.\n",stderr);
        exit(1);
    }
    stack[++s_top]=x;
}

int stack_pop(){
    if(stack_is_empty()){
        fputs("Stack is empty.\n",stderr);
        exit(1);
    }
    return stack[s_top--];
}
