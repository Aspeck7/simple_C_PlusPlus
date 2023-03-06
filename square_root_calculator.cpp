#include <iostream>
int main()
{
    int n, r, guess, count = 0;
    cout << "Enter a number to estimate the square root: \n"; 
    std::cin >> n;
    double guess = static_cast<double>(n) ;
    while (count < 5) {
        r = n / guess;
        guess = (guess + r) / 2;
        count++;
    }





    cout << "The esitamted square root of " << n << " is: " << guess;
    return 0;
}