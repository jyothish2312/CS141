#include <iostream>
using namespace std;
int main () {
int a, b, c;
cout<<"this program helps you to tell wether a triangle with the given angles is valid or not. please input the angles___:"<<endl;
cin>>a>>b>>c;

if ((a+b+c)==180)
	cout<<"the triangle is possible"<<endl;
else 
	cout<<"the triangle is not possible"<<endl;


return 0;
}
