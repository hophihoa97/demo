all: hello.o libs.o
	gcc -c hello.o libs.o
libs.o: libs.c
	gcc -c libs.c
hello.o: hello.c
	gcc -c hello.c 
clean:
	rm –rf *.o hello
