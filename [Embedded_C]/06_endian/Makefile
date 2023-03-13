pre: main.c
	cpp main.c > main.i

comp: main.i
	gcc -S main.i

asm: main.s
	as -o main.o main.s

#batch automation

main.o: main.c
	gcc -c main.c

all: main.o
	gcc -o main main.o
	./main