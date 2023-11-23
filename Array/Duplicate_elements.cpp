#include <bits/stdc++.h>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int n = arr.size();
    int largest = removeDuplicates(arr, n);
    cout << largest << endl;
    return 0;
}
