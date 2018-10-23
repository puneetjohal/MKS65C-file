all: file.o
	gcc file.o

run:
	./a.out

file.o: file.c
	gcc -c file.c
