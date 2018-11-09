	//including library
#include<iostream>		//include library
using namespace std;	
int main()
{
	int n,sum=0;
	cout<<"Please enter value corresponding to the size of your desired array : ";
	cin>>n;
	//defining an array of size n
	int a[n];				
	//giving the values to array boxes
	for(int i=0;i<n;i++)	
	{
		a[i]=i+1;
	}	
	int i=0;
	while(i<n)
	{
		//adding all the elements of the array
		sum = sum + a[i];
		i++;
	}
	cout<<"THe sum of integers from 1 to "<<n<<" is:"<<sum;
	return 0;
}
