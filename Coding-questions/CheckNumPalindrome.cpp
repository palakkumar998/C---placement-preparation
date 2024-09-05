#include <iostream>

using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    n = num; // Store the original number

    // Reverse the number
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (n == rev)
    {
        cout << n << " is a palindrome." << endl;
    }
    else
    {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}