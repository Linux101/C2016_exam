#include <stdio.h>
#include "my_stack.h"

void stack_push(int x)//N为栈当前大小
{
	if(N==STACK_SIZE)
		return ERROR;
	else
		stack[N++]=x;
}

int stack_pop()
{
	if(N==0)
		return ERROR;
	else
		return stack[N--];
}

int stack_capacity()
{
	return STACK_SIZE;
}

int stack_size()
{
return N;
}

int stack_is_empty()
{
if(N==0)
return 1;
else
return 0;
}

int stack_is_full()
{
	if(N==STACK_SIZE)
return 1;
else
return 0;
}

