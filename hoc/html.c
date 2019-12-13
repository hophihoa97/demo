#include<stdio.h>
#include<string.h>

int main(int a,char*arg[],char*env[] )
{
	printf("<html>\n");
	printf("<body bgcolor=\"%s\">\n",arg[1]);
	printf("</body>\n");
	printf("</html>\n");
return 0;

}
