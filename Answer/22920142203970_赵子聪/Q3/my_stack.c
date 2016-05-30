/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include "include/my_stack.h"
void stack_push(int x,int *Stack,int cp,int size){
    if(!stack_is_full(cp,size)){
      cp++;
      Stack[cp]=x;
    }
    else printf("Error!\n");
}
int stack_pop(int cp,int *Stack){
    if(!stack_is_empty(cp)){
      return Stack[cp--];
    }
    else {
    printf("Error!\n");
    return -1;
    }
}
int stack_capacity(int size){
    scanf("%n",&size);
}
int stack_size(int size){
    return size;
}
int stack_is_empty(int cp){
    if(cp==0){
    return 1;}
    else return 0;
}
int stack_is_full(int cp,int size){
    if(cp==size) return 1;
    else return 0;
}
