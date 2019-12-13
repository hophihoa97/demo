all:chapter5_1.o decode_value.o
	gcc  chapter5_1.o decode_value.o -o hello6
chapter5_1.o: chapter5_1.c
	gcc chapter5_1.c -o hello6 `mysql_config --cflags --libs`
decode_value.o: decode_value.c
	gcc -c decode_value.c 
clean:
	rm -rf*.o hello6
