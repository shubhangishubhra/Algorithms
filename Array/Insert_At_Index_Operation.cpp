#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int pos, int cap)
{
    if (n == cap)
        return n; //return orignal size of its at capacity
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1); //returns new siz eof array
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int pos = 2;
    int cap = 7;
    int res = insert(arr, n, x, pos, cap);
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
