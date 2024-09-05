#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ! check if a given String is Palindrome or not

// Method 1: Using the Inbuilt reverse() Function in the STL
string isPlalindrome(string s)
{
    string p = s;

    // this is a stl inbuilt function
    reverse(p.begin(), p.end());

    if (s == p)
    {
        return "yes";
    }
    else
    {
        return "NO";
    }
}
// Method 2: By Traversing the String

string isPalindromeByTraversing(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return "no";
        }
    }
    return "Yes";
}

int main()
{
    string s = "ABCDCBA";
    // cout << isPlalindrome(s);
    cout << isPalindromeByTraversing(s);
    return 0;
}
