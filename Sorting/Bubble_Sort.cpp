#include <iostream>
#include <vector>

using namespace std;
void bubbleSort(std::vector<int> &arr, int N)
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
    for (int i = 0; i <= N; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    vector<int> arr = {3, 2, 4, 5};
    int N = arr.size();
    bubbleSort(arr, N);
    return 0;
}
