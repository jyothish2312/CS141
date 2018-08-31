#include <iostream>
using namespace std;
int main () {
 //a simple c++ program to calculate profit and loss
//suppose the expanditure is x
//the income is y
//if y>x then profit is "p = y-x"
//if y<x then loss is "l = x-y"
int x,y,p,l;
cout<<"please input the expenditure and income:___"<<endl;
cin>>x>>y;

if (x<y){ 
p=(y-x);
cout<<"your profit is:__"<<p<<endl;
}

else {
l=x-y;
cout<<"your loss is:__"<<l<<endl;
}

return 0;
}
