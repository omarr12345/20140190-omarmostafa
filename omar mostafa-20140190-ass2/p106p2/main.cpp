#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
for(int i=0 ; i<1000000; i++){
   const double INCREASE=0.076; // constant of increasing in payment
   double x; // where x is the input annual salary
   double y=0;//increase of your salary
   double s=0;//new monthly salary
   double p=0;// previous monthly salary
   double a=0; // new annual salary
   cout<<"enter your annual salary=";
   cin>>x;
   y=x*INCREASE;
   cout<<"retroactive pay="<<y<<endl;
   p=x/12;
   cout<<"previous monthly salary="<<p<<endl;
   s=x/12+y/12;
   cout<<"new monthly salary="<<s<<endl;
   a=x+y;
   cout<< "new annual salary"<<a<<endl;

}
}
