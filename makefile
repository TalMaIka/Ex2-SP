CC=gcc
FLAGS= -Wall -g
FLAGSD = -Wall -fPIC

all: connections 

connections:  main.o libmy_mat.a
	${CC} ${FLAGS} main.c -L. libmy_mat.a -o connections

main.o: main.c my_mat.h
	${CC} ${FLAGS} -c main.c

my_mat.o: my_mat.c my_mat.h
	${CC} ${FLAGS} -c my_mat.c

libmy_mat.a : my_mat.o
	${AR} -rcs libmy_mat.a my_mat.o

clean:
	rm -f *.o *.a main