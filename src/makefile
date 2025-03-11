HEADERS = pr1.h 

default: pr1

pr1.o: pr1.c $(HEADERS)
	gcc -c pr1.c -o pr1.o

test.o: test.c $(HEADERS) 
	gcc -c test.c -o test.o

pr1: pr1.o
	gcc pr1.o -o pr1

test: test.o
	gcc test.o -o test

clean:
	-rm -f pr1.o
	-rm -f pr1
	-rm -f test.o
	-rm -f test
