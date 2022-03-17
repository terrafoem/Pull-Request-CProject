final.exe:main.o big3.o fact.o fibo.o
	gcc -o final.exe main.o big3.o fact.o fibo.o
main.o:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
fibo.o:fibo.c
	cc -c fibo.c
big3.o:big3.c
	gcc -c big3.c
