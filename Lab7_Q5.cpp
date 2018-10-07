#include<iostream>
using namespace std;
//Write a C++ program to find sum of all even or odd numbers in given range using recursion.
//number chahiye sabse pehle ki kaha tak ki range leni hai
//fir ab us number ka 2+ karke func me add karte jao

int func(int m, int n){
	int x;
	if(n>=m){
		x=n+func(m, n-2);
	}
	else{
		return 0;
	}
	return x;
}
int main(){
	int m, n;
	cout<<"feed in the value of first number and second number: ";
	cin>>m>>n;
	cout<<"the sum of all odd/even numbers from "<<m<<" to "<<n<<" is: "<<func(m, n)<<endl;
	
	return 0;
	}
