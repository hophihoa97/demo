#include<stdio.h>
int main(int a,char *ptr[])
{
	int i=0;
	printf("hello\n");
	printf("%d\n",a);
	for (i=0;i<a;i++)
{
	printf("%d is %s\n",i,ptr[i]);
}
return 0;
}

