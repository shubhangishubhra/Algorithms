/*#include <iostream>
using namespace std;

int foccurance(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    return count;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = foccurance(arr, n);
    cout << index << endl;
}*/
#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == 0)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
                return (n - mid);
            else
                high = mid - 1;
        }
    }

    return 0;
}

int main()
{

    int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;

    cout << countOnes(arr, n);

    return 0;
}