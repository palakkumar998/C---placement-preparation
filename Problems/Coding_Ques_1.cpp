#include <iostream>
#include <string>
using namespace std;
// Question --> you are given an array arr of size n and an integer k. you need to find the number of pairs in the array whose sum equals k. the arr[i]+ arr[j] == k, where i != k. the function count_pair() accepts the parameters array of integer arr with the size n and an integer k. Complete the function count_pair() and return the count of the pairs counter in the integer format.

// for Example : if the array arr is [2,4,6,2,1] of size 5 and k is 8 then counter value will be 2 since there are two pairs arr[0]+arr[2]==k and arr[2]+arr[3]==k

// Constraints:-
// 1 <=n <= 1030
// 1<=k<=1000

// example 1:
// Input:
// n = 8
// arr = [11,3,5,2,5,4,0]
// k = 9

// Output:
// counter = 2
class solution
{

public:
    std::string longestPalindrome(std::string input_str)
    {
        std::string result = "";
        // Get the length of the input string
        int n = input_str.length();
        if (n == 0)
            return result;

        // dp[i][j] will be 'true' if the string from index i to j is a palindrome
        bool dp[n][n];
        fill_n(*dp, n * n, false);

        int maxLen = 1; // Single character palindromes
        int start = 0;

        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        // Check for substrings of length 2
        for (int i = 0; i < n - 1; i++)
        {
            if (input_str[i] == input_str[i + 1])
            {
                dp[i][i + 1] = true;
                start = i;
                maxLen = 2;
            }
        }

        // Check for substrings of length greater than 2
        for (int len = 3; len <= n; len++)
        {
            for (int i = 0; i < n - len + 1; i++)
            {
                int j = i + len - 1; // Ending index of the substring

                // Check if current substring is a palindrome
                if (input_str[i] == input_str[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                    if (len > maxLen)
                    {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }

        // Extract the longest palindromic substring
        result = input_str.substr(start, maxLen);
        return result;
    }
};

int main()
{
    solution sol;
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: " << sol.longestPalindrome(s) << endl;

    return 0;
}