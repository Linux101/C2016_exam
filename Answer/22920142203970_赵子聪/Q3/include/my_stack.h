#ifndef _MY_STACK_H
#define _MY_STACK_H


void stack_push(int x,int *Stack,int cp,int size);
int stack_pop(int cp,int *Stack);

// The capacity of the stack
int stack_capacity(int size);

// Current available size of the stack
int stack_size(int size);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(int cp);
int stack_is_full(int cp,int size);


#endif //_MY_STACK_H
