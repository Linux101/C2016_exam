#include <stdio.h>

#include "include/my_stack.h"
#define STACK_SIZE 100
int main(void) {
	int stack[STACK_SIZE];	
	int n;
        while ( ! stack_is_full() ) {
		scanf("%d", &x);
		stack_push(x);
	}
	

	while ( !stack_is_empty() ) {
		x = stack_pop();
		printf("%d\t", x);
	}
	printf("\n");

	return 0;//
}
