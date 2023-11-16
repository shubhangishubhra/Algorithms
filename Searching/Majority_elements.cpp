#include <iostream>
#include <map>
using namespace std;

int majorityElement(int arr[], int n)
{
    std::map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++; // Increment the count for the current element in the map

        if (mp[arr[i]] > n / 2)
        {
            return arr[i]; // If the count becomes greater than n/2, it is the majority element
        }
    }

    return -1; // Return -1 if there is no majority element
}

int main()
{
    int arr[] = {1, 2, 1, 1};
    unsigned n = sizeof(arr) / sizeof(arr[0]);
    int res = majorityElement(arr, n);
    cout << res << endl;
    return 0;
}
