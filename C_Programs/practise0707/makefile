sum:sum.o sum_of_two.o
	gcc sum.o sum_of_two.o -o sum
sum.o:sum.c
	gcc -c sum.c
sum_of_two.o:sum_of_two.c
	gcc -c sum_of_two.c
clean:
	rm *.o sum

