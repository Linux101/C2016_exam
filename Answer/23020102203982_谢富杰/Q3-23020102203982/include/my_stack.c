/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include "my_stack.h"

int *stack_;
int max_size_;
int index_;

void stack_init(int max_size){
  max_size_ = max_size;
  stack_ = malloc(sizeof(int) * max_size_);
  index_ = 0;
}

void stack_push(int x){
  if (index_ == max_size_){
    return;
  }
  stack_[index_++] = x;
}

int stack_pop(){
   if (index_ == 0){
     return 0;
   }
   return stack_[--index_];
}

// The capacity of the stack
int stack_capacity(){
  return max_size_;
}

// Current available size of the stack
int stack_size(){
  return index_;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(){
  return (index_ == 0 ? 1 : 0);
}

int stack_is_full(){
  return (index_ == max_size_ ? 1 : 0);
}
