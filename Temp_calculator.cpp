#include <iostream>

using namespace std;

int main(int num_args, char** arg_strings)
{

int celsius=100;
int fahrenheit=((9/5.0)*celsius) + 32;



cout<<"Celsius         Fahrenheit\n";
cout<<"-----------------------------\n";


    while(celsius != fahrenheit){
        cout << celsius << "          " << fahrenheit << "\n";
        celsius = celsius - 1;
        fahrenheit = ((9/5.0)*celsius) + 32;
}


cout << celsius << "         " << fahrenheit << "\n";




return 0;
}