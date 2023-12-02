/*O(n)
#include <iostream>
using namespace std;

int foccurance(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
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
    int x = 2;
    int index = foccurance(arr, n, x);
    cout << index << endl;
}
*/

/* O(log(n))*/

#include <iostream>
using namespace std;

int fo(int arr[], int n, int low, int high, int x)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (x > arr[mid])
        return fo(arr, n, mid + 1, high, x);
    else if (x < arr[mid])
        return fo(arr, n, low, mid - 1, x);
    else
    {

        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return fo(arr, n, low, mid - 1, x);
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int index = fo(arr, n, 0, n - 1, x);
    cout << index << endl;

    return 0;
}
