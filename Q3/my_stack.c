
    #include<my_stack.h>
    #include <stdio.h>  
    #include <stdlib.h>  
      
    #define STACKINITSIZE 20  
        
    typedef struct   
    {  
      ElemType *top;  
      ElemType *base;  
      int stackSize;  
    } sqStack;  
      
    sqStack s;
    //初始化栈  
    int stack_init()  
    {  
      s->base=(int *)malloc(STACKINITSIZE*sizeof(int));  
      if(!s->base)  
        return -1;  
      s->top=s->base;  
      s->stackSize=STACKINITSIZE;  
      return 1;  
    }  
      
    //入栈  
    void stack_push(int x)  
    {  
      if(s->top-s->base<s->stackSize)
        {  
          *(s->top)=x;  
          s->top++;  
          return; 
        }  
       
    }  
      
    //出栈  
    int stack_pop()  
    {  
      int e;
      if(s->top!=s->base) {
          e=--s->top;
          return e;
      }
       
    }  
      

    int stack_capacity(){
        return s->stackSize;
    }


    int stack_size(){
        return s->top-s->base;
    }
    
      
    int stack_is_empty(){
        return s->top==s->base;
    }

    
    int stack_is_full(){
        return s->top-s->base==stackSize;
    }
    
