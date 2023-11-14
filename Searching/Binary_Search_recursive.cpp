#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int bSearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bSearch(arr, low, mid - 1, x);
    else
        return bSearch(arr, mid + 1, high, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 6;
    int result = bSearch(arr, 0, n - 1, x);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
