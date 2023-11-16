#include <iostream>
using namespace std;

int deletion(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1); 
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int res = deletion(arr, n, x);
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
