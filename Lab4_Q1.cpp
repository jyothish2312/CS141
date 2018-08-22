#include <iostream>
using namespace std;
int main(){
//welcome note
cout <<"hello there..welcome to the length converter****this code is written by jyozzz****"<<endl;
//declaring variables
float c;
float m;
float k;
//asking input
cout <<"now please enter the length in centimeters:   ";
cin >>c;
//methamatical relations to be followed
m=c/100;
k=m/1000;
//result projection
cout<<"length in meters is:  "<<m<<endl;
cout<<"length in kilometers is: "<<k<<endl;
return 0;

}
