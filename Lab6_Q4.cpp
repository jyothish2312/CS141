#include<iostream>
using namespace std;

//(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

int func(int a, int b){
	int min;
	if (a<b){
		min=a;}
	else {
		min=b;}
	return min;
}

//(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.
void bunk(int a, int b, int &x){
	if (a<b){
		x=a;}
	else{x=b;}
}
int main(){

int a, b, z;
cin>>a>>b;

cout<<"the minimum is:_____"<<func(a,b)<<endl;

	bunk(a,b,z);
	cout<<"the minimum by second method is also:___"<<z<<endl;



return 0;
}
