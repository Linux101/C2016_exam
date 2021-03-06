/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "my_stack.h"

int rear=0;
int a[15];

void stack_push(int x)
{
	a[rear++]=x;
}
int stack_pop()
{
	return a[--rear];
}
int stack_capacity()
{
	return 15;
}
int stack_size()
{
	return (15-rear);
}
int stack_is_empty()
{
	if(rear==0)
		return 1;
	else
		return 0;
}
int stack_is_full()
{
	if(rear==15)
		return 1;
	else
		return 0;
}

