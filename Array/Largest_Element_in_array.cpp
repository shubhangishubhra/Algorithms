/*
Time Complexity: O(N*log(N))
Space Complexity: O(n)
 */
#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> &arr, int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[N - 1];
}

int main()
{
    vector<int> arr = {3, 2, 4, 5};
    int N = arr.size();
    int largest = largestElement(arr, N);
    cout << "Largest element: " << largest << endl;
    return 0;
}
