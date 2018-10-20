#include<iostream>		
#include<cstring>
#include<cmath>

using namespace std;
//defining the function
	
void f(int n,int z)		
{
	/*the recursion will keep on multipling till n reduces to 1*/
	if(n>=1)			//exit condition
	{					
		z =z*n;
		n--;
		f(n,z);		
	}
	else
	{
		cout<<"the value of "<<n<<"! = "<<z;
	}
}
int main()
{	
	int n;
	cout<<"enter the number: ";
	cin>>n;
	f(n,1);
	return 0;
}
