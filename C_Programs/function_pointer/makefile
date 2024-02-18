func:func1.o func2.o
	gcc func1.o func2.o -o func
func1.o:func1.c
	gcc -c func1.c
func2.o:func2.c
	gcc -c func2.c
clean:
	rm *.o func
