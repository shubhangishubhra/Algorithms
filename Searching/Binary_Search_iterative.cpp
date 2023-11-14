#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int bs(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = floor((low + high) / 2);
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] == x)
            return mid;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 6; // The element to search for
    int result = bs(arr, n, x);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
