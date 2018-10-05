#include<iostream>
using namespace std;

//Write a C++ program to print all even or odd numbers in given range using recursion.
int func(int x, int n){
	if(x<=n){
	cout<<x<<endl;
	func(x+2,n);
	}
return 0;
}

int main(){
	int n, x;
cout<<"this program should let you print the series of odd or even numbers within a given range:_"<<endl;
cout<<"feed in the start point and end point:___"<<endl;
	cin>>x>>n;
	func(x,n);

return 0;
}
