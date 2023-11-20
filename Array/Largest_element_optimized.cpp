/*
0(n)
*/

#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> &arr, int N)
{
    int max = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    vector<int> arr = {9, 2, 4, 5};
    int N = arr.size();
    int largest = largestElement(arr, N);
    cout << "Largest element: " << largest << endl;
    return 0;
}
