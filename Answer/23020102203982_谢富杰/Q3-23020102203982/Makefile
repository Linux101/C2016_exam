stack: main.o my_stack.o
	gcc -o stack main.o my_stack.o

main.o: main.c ./include/my_stack.h ./include/my_stack.c
	gcc -c main.c ./include/my_stack.h ./include/my_stack.c

my_stack.o: ./include/my_stack.h ./include/my_stack.c
	gcc -c my_stack.o ./include/my_stack.h ./include/my_stack.c

clean:
	rm main.o my_stack.o stack
