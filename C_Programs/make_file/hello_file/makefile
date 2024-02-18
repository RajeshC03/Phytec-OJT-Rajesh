all: hello_world.o hello run
hello_world.o: hello_world.c
	gcc -c hello_world.c
hello: hello_world.o
	gcc hello_world.o -o hello
run:
	./hello
