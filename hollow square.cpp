#include <iostream>
using namespace std;
int main () {
int i,c,n,x,s,b;

cout<<"this program will print out a square of side 'n' units. please enter the value of 'n':"<<endl;

cin>>n;

for (i=0;i<n;i++){
	
	if ((i==0) || (i==n-1))
	{	for (x=0;x<n;x++){
		cout<<"*";
		}
        }	
//first and last line full of stars
//for all the rest of lines we need to have one* rest all spaces then one *
	else	{
		cout<<"*";
		for (s=1;s<(n-1);s++){
		cout<<" ";
		}
		cout<<"*";
		}


cout<<endl;
}

return 0;
}
