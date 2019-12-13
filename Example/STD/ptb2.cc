#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,x1,x2, delta;
	cout<<"Nhap a"<<endl;
	cin>>a;
	cout<<"Nhap b"<<endl;
        cin>>b;
	cout<<"Nhap c"<<endl;
        cin>>c;
	delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 << endl;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b/2*a << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
