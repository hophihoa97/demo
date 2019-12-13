#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <mysql/mysql.h>
#include "c_in_linux.h"
int main()
{
	char* pPath;
  	pPath = getenv ("QUERY_STRING");	
	char value1[255] = "";
	//printf("Content-type:text/html\n\n<html><body bgcolor=#23abe2>\n");
	strncpy(value1,pPath,255);
	printf("pPath : %s<BR>\n", value1 );
	decode_value( "ITEM1=", (char *) &value1, 255);
}
