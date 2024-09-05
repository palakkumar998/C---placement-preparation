#include <iostream>
using namespace std;

double factorial(double n)
{
    if (n < 0)
        return (-1); /*Wrong value*/
    if (n == 0)
        return (1); /*Terminating condition*/
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    double factorial(double);

    double value;
    cout << "Enter any number: ";
    cin >> value;

   
    cout << "Factorial of a number is: " << factorial(value) << endl;
    return 0;
}
