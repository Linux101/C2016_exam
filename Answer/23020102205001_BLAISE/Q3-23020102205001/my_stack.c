/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include "my_stack.h"

int stack_is_full(Stack *pS)
{
   
   if(pS->top == pS->size-1)
     /* stack is full */
     return(1);
   else
     return(0);
}



int stack_is_empty(Stack *pS)
{
  
   if(pS->top == -1)
     /* stack is empty */
     return(1);
   else
     return(0);
}


void stack_push (int stack[], int x) {
	if (top == (MAX-1))
		status = 0; else {
		status = 1;
		++top;
		stack [top] = x;
	}
}


int stack_pop (int stack[]) {
	int ret;
	if (top == -1) {
		ret = 0;
		status = 0;
	} else {
		status = 1;
		ret = stack [top];
		--top;
	}
	return ret;
}
