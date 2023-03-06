#include <iostream>
using namespace std;
int main()
{

int month=0;



double payment;
double intrest;
double MonthlyPay=50;
double balance;
double total=1000; 
    
    do{
        intrest=0.015*total;
        payment=total+intrest;
        balance=payment-MonthlyPay;
        total=balance;
        month++;



cout << "Month number: " <<month<< " added interest: $" <<intrest<< " remaining balance: $" << balance << "\n";

    }while(total>=0);

cout<< endl << "The loan would take: "<<month<<"months to pay off \n";



}