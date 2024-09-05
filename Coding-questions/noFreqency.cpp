#include <iostream>
using namespace std;

int main()
{
    int n, digitCount[10] = {0}; // Array to hold frequency of digits

    cout << "Input any number: ";
    cin >> n;

    // Count frequency of each digit
    while (n > 0)
    {
        int digit = n % 10;  // Get the last digit
        digitCount[digit]++; // Increment the count for this digit
        n /= 10;             // Remove the last digit
    }

    // Display the frequency of each digit
    for (int i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " = " << digitCount[i] << endl;
    }

    return 0;
}