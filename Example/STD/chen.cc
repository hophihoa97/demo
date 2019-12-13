#include<iostream>
#include<cstdio>
using namespace std;
void Nhap(int a[100], int n)
{
	for(int i=0;i<n;i++)
	cin>>a[i];

}
void Xuat (int a[100],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];
}
void chen(int a[100],int n,int vtc,int so)
{
	for(int i=n;i>=vtc;i--)
{	a[i]=a[i-1];}
	a[vtc]=so;
	n++;
}

int main(void){
	int a[100];
	int n;
	int vtc,so;
	cout<<"Nhap n";
	cin>>n;
	cin>>so;
	cin>>vtc;
	Nhap(a,n);
	Xuat(a,n);
	chen(a,n,vtc,so);
return 0;	


}
