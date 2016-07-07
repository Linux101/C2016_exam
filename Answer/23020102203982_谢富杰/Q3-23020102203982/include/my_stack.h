#ifndef _MY_STACK_H
#define _MY_STACK_H

#include <stdlib.h>
/*
 *init the stack
 *[IN] the max size of the stack
 */
void stack_init(int max_size);

/*
 *push an elem back to the stack
 *[IN] the elem
 */
void stack_push(int x);

/*
 *pop an elem from the back of the stack
 *[RETURN] the elem
 */
int stack_pop();

/*
 *return the capacity of the stack
 *[RETURN] the capacity of the stack
 */
int stack_capacity();

/*
 *return the max size of the stack
 *[RETURN] the max size of the stack
 */
int stack_size();

/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty();
int stack_is_full();

#endif //_MY_STACK_H
