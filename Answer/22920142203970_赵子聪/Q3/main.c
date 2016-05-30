#include <stdio.h>

#include "include/my_stack.h"
int Stack[10];
int size=5;
int cp=0;
int main(void) {
	int x;	
        printf("hello\n");
        while ( ! stack_is_full(cp,size) ) {
		scanf("%d", &x);
		stack_push(x,Stack,cp,size);
	}
	

	while ( !stack_is_empty(cp) ) {
		x = stack_pop(cp,Stack);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
