
all: lib_cil 4-4
lib_cil:
	gcc -c print_hello.c
	ar rcs c_in_linux.a print_hello.o
4-4: 
	gcc -o helloc hello.c c_in_linux.a 

