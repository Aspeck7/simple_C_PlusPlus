#include <iostream>
using namespace std;
int main()
{
    int lbs,min,METS;
    double calories,kg;

std::cout << "Please enter your weight: \n";
std::cin >>kg;
std::cout<<"Please enter mets \n";
std::cin>>METS;
std::cout<<"In minutes how long did you exercise? \n";
std::cin>>min;

calories=.0175*METS*(lbs/2.2);
calories*=min;

std::cout<<"Total calories burned:"<<calories<< "\n";


return 0;

}