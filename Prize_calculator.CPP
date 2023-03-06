#include <iostream>
using namespace std;

int main()
{
//Variables declaration
int num_coupons = 0;
int CandyBar;
int GumBall;

cout<< "Please enter number of coupons you have \n";
cin>>num_coupons;

//Calculations
CandyBar=num_coupons/10;
num_coupons=num_coupons%10;

GumBall=num_coupons/3;
num_coupons=num_coupons%3;


//Output the number of candy bars and gumballs
cout<< "You may redeem: "<<CandyBar<<" candy bars and: "<<GumBall<<" gum balls with: "<<num_coupons<<" coupon remaining \n";


return 0;

}