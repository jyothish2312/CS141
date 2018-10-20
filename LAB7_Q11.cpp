#include<iostream>				
using namespace std;		

//defining function	

void f(int n,int k,int i)		
{
	/*to take the HCF of two numbers; take two numbers, divide them by the one which is greater. 
	If it divides both then we have the Hcf else decrement it,repeat
	the logic used is that the hcf(a,b)<= max(a,b) */
	if ((n%i)==0 && (k%i)==0 )
	{
		cout<<"the HCF of the given numbers is : "<< i;
	}
	else
	{
		i--;
		f(n,k,i);				 
	}
	
}
int main()
{
	int n,k,i;	
		//declaring and assigning variables				 
	cout<<"please enter the first number: ";
	cin>>n;
	cout<<"please enter the second number: ";
	cin>>k;
	
	if (n>k)
	{
		i=n;
	}
	else
	{
		i=k;
	}
//calling the function 
	f(n,k,i);					
	return 0;
}
