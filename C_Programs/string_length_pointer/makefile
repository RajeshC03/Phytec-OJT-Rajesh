string:string.o string1.o
	gcc string.o string1.o -o string
string.o:string.c
	gcc -c string.c
string1.o:string1.c
	gcc -c string1.c

clean:
	rm *.o string
