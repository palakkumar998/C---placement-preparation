#include <iostream>
#include <unordered_map>
#include <vector>

class Solution
{
public:
    int count_pair(std::vector<int> &arr, int n, int k)
    {
        int counter = 0;
        std::unordered_map<int, int> freq;

        // Traverse through each element in the array
        for (int i = 0; i < n; i++)
        {
            // Check if (k - arr[i]) exists in the map
            if (freq.find(k - arr[i]) != freq.end())
            {
                counter += freq[k - arr[i]]; // Increment counter by the frequency of (k - arr[i])
            }

            // Increment the frequency of the current element
            freq[arr[i]]++;
        }

        return counter;
    }
};

int main()
{
    Solution sol;
    std::vector<int> arr = {11, 8, 12, 7, 7, 9, 10};
    int n = arr.size();
    int k = 19;

    std::cout << "Counter: " << sol.count_pair(arr, n, k) << std::endl;

    return 0;
}
