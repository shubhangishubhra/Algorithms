/*#include <iostream>
using namespace std;

int loccurance(int *arr, int n, int x)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    int index = loccurance(arr, n, x);
    cout << index << endl;
}*/
#include <iostream>
using namespace std;

int lastOcc(int arr[], int low, int high, int x, int n)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (x > arr[mid])
        return lastOcc(arr, mid + 1, high, x, n);

    else if (x < arr[mid])
        return lastOcc(arr, low, mid - 1, x, n);

    else
    {
        if (mid == n - 1 || arr[mid + 1] != arr[mid])
            return mid;

        else
            return lastOcc(arr, mid + 1, high, x, n);
    }
}

int main()
{

    int arr[] = {5, 10, 10, 10, 10, 20, 20}, n = 7;

    int x = 10;

    cout << lastOcc(arr, 0, n - 1, x, n);
    return 0;
}