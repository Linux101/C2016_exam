#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int x;
    struct node *next;
}Node;

typedef struct stack
{
    Node *top;
}Stack;

void InitStack(Stack *s)//初始化
{
    s->top=NULL;
}

int stack_is_empty(Stack *s)//判断是否为空
{
    if(s->top==NULL||s==NULL)
        return 1;
    else
        return 0;
}


int stack_is_full(Stack *s)
{
	if()
}
void stack_pop(Stack *s,int x)//实现push
{
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    p->x=x;
//    p->next=NULL;

        p->next=s->top;
        s->top=p;
}

int stack_pop(Stack *s)//实现pop
{
    int data;
    Node *p;
    p=(Node *)malloc(sizeof(Node));
    if(IsEmpty(s))
    {
        printf("the stack is empty!\n");
        free(p);
        return -1;
    }
    else
    {
        p=s->top;
        data=p->x;
        s->top=p->next;
        free(p);
        return data;
    }
}

