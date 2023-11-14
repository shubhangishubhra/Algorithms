#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ls(int *arr, int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int x = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ls(arr, n, x) << endl;
    return 0;
}