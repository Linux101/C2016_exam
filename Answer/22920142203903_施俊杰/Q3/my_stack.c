/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct Stack {
    int *top;
    int *base;
    int stacksize;
} Stack;

Stack * init_stack(Stack * s){
    s = (Stack *) malloc(sizeof(int) * SIZE);
    s->stacksize = SIZE;
    s->top = s->base;
    return s;
}

int stack_is_empty(Stack *s){
    if (s->base == s->top)
        return 1;
    else
        return 0;
}
int stack_is_full(Stack *s){
    if (s->top - s->base == SIZE)
        return 1;
    else
        return 0;
}

void stack_push(Stack *s, int x){
    if (stack_is_full(s) != 0)
        return;
    else{
        *(s->top) = x;
        s->top++;
    }
}

int stack_size(Stack *s){
    return SIZE - (s->top - s->base);
}

int stack_pop(Stack *s){
    if (stack_is_empty(s) != 1)
        return *(--s->top);
    else
    return;
}
