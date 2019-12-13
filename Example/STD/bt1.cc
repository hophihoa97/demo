#include<iostream>
using namespace std;
main(){
char *p3;
char d='S',c='t';
char *p1=&c;
char *p2=&d;
*p2=*p1;
	cout<<*p1<<endl;
	cout<<p1<<endl;

}
