
#include<iostream>			//including the library
using namespace std;		

void f(int a,int b,int n,int z, int i)
{
	if(i<=n)
	{
		i++;
		z=a+b;
		a=b;
		b=z;
		f(a,b,n,z,i);		
	}
	else 
	{
		cout<<"the value of nth fibonacci sequence number is: "<<z;	
	}
}
int main()
{
	int n;
	cout<<"Please enter the value of n(n>0): ";
	cin>>n;
	f(-1,1,n,0,1); 
 
	return 0;
}
