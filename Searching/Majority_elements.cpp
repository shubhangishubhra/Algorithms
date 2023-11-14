class Solution
{
public:
    int majorityElement(int arr[], int n)
    {
        int count = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
                res = arr[i];
            if (res == arr[i])
                count++;
            else
                count--;
        }
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == res)
                count++;
        }
        if (count > n / 2)
            return res;
        else
            return -1;
    }
};