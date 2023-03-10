pre: main.c
	cpp main.c > main.i

comp: main.i
	gcc -S main.i

asm: main.s
	as -o main.o main.s

#batch automation
incre.o: incre.c
	gcc -c incre.c

decre.o: decre.c
	gcc -c decre.c

main.o: main.c
	gcc -c main.c

all: main.o incre.o decre.o
	gcc -o main main.o incre.o decre.o
	./main