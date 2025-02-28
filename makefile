HEADERS = pr1.h 

default: pr1

pr1.o: pr1.c $(HEADERS)
	gcc -c pr1.c -o pr1.o

pr1: pr1.o
	gcc pr1.o -o pr1

clean:
	-rm -f pr1.o
	-rm -f pr1