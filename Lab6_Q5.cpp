#include<iostream>
using namespace std;

//Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output.

int func(int a, int b){
	int sum;
	sum=a+b;
return sum;}

int bunc(int c, int d){
	int max;
	if (c>d){
	max=c;}
	else {
	max=d;}
return max;}
int munc(int e, int f){
	int min;
	if (e<f){
	min=e;}
	else {
	min=f;}
return min;}


int main(){
int z,y,x,j,a,b,c,e,d,f;
cout<<"PLS CHOOSE A FUNCTION BY ENTERING IT'S CORRESPONDING CODE:_____"<<endl;
cout<<"1: SUM"<<endl;
cout<<"2: MAXIMA"<<endl;
cout<<"3: MINIMA"<<endl;

cin>>j;


if (j==1){
cout<<"pls enter your values:"<<endl;
cin>>a>>b;
cout<<"THE SUM IS:____"<<func(a,b)<<endl;
	}
else if (j==2){
cout<<"pls enter your values:"<<endl;
cin>>c>>d;
cout<<"THE MAXIMA IS:____"<<bunc(c,d)<<endl;
}

else if (j==3){
cout<<"pls enter your values:"<<endl;
cin>>e>>f;
cout<<"THE MINIMA IS:___"<<munc(e,f)<<endl;
}

return 0;
}
