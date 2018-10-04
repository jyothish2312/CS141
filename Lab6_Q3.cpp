#include<iostream>
using namespace std;

//(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

int func(int a, int b){
	int max;
	if (a<b){
		 max = b;
		}
	else {
		max = a;
		}
	return max;
	}

//(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
void bunk(int a, int b, int &x){
	if (a<b){
		 x = b;
		}
	else {
		x = a;
		}

}


int main(){

int a,b,z;

cin>>a>>b;

cout<<"THE MAXIMUM IS:____"<<func(a,b)<<endl;


	bunk(a,b,z);
	cout<<"MAXIMUM BY SECONT METHOD IS ALSO:___"<<z<<endl;

return 0;
}




