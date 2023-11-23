#include <iostream>
#include <vector>

std::vector<int> rotateArray(std::vector<int> &arr, int n)
{

    int firstElement = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = firstElement;
    return arr;
}

int main()
{
    std::vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int n = arr.size();
    rotateArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
