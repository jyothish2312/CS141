#include <iostream>
using namespace std;
int main() {

//introduction
cout<<"hello there...this program will help you calculate the YEAR, MONTH, WEEK , DAY wise presentation of desired number of days"<<endl;
cout<<"******this program is coded by JYOTHISH KUMAR J//Jyozzz :)"<<endl;

//declaring variables 

int d , w , m , y ;
float x;

//seeking input

cout<<"now please enter the number of days you wish to get presented in the said format_______:"<<endl;
cin>>d;

//mathematical relations 
y=d/365.25;
m=(d/365.25-y)*365.25/12 ;
w=((d/365.25-y)*(365.25/12)-m)*12/7 ;
x=((((d/365.25-y)*(365.25/12)-m)*12/7)-w)*7 ;

//showing results
cout<<"the input value of days stands for:"<<y<<"   YEARS   "<<m<<"  MONTHS   "<<w<<"   WEEKS   "<<x<<"   DAYS   "<<endl;

return 0;
}
