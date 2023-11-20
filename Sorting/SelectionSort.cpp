#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    int N = arr.size();
    for (int i = 0; i < N - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    vector<int> arr = {3, 2, 4, 5};
    selectionSort(arr);
    return 0;
}
