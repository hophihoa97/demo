#include<stdio.h>
	int main(void){
	unsigned int a=12;
	char c='T';
	unsigned int *ptr=&a;
		printf("%p\n",&a);
		printf("%p\n",ptr);
		printf("%d\n",*ptr);
		printf("%s\n",&c);
}
