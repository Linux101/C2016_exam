main: my_stack.o main.o
	gcc -Wall my_stack.o main.o -o main
	
my_stack.o:
	gcc -c -Wall my_stack.c -o my_stack.o

main.o:
	gcc -c -Wall main.c -o main.o

clean:
	rm main main.o my_stack.o
