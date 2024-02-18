sum:sum.o sum1.o
	gcc sum.o sum1.o -o sum
sum.o:sum.c
	gcc -c sum.c
sum1.o:sum1.c
	gcc -c sum1.c
clean:
	rm *.o sum
