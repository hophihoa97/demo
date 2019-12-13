#include<iostream>
using namespace std;
void Nhap(int a[100],int n)
{	
	
	for(int i=0;i<n;i++)
	cin>>a[i];
}

void Xuat(int a[100],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];

}
int  main(void){
	int a[100];
	int n;
	cout<<"Nhap n"<<endl;
	cin>>n;
	Nhap(a,n);
	Xuat(a,n);
return 0;	


}
