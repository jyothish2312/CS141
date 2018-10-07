#include<iostream>
using namespace std;

//Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
//untill something <n we will add that to 1 to recieve x

int fun(int n){
	int x;

	if (n>=1){
			
		x=n+fun(n-1);
	}
	
	return x;
}
int main(){
	int n, s;
	cout<<"feed in the value of limiting number:__";
	cin>>n;
	cout<<"the sum of all natural numbers from 1 to "<<n<<" is:__"<<fun(n)<<endl;
	return 0;
}
