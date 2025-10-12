
class Solution
{
public:
    bool isMaxHeap(int arr[], int n)
    {
        bool ans = true;
        for (int i = 0; i <= (n - 2) / 2; i++)
        {
            if (arr[i] < arr[2 * i + 1])
            {
                ans = false;
            }
            if (2 * i + 2 < n && arr[i] < arr[2 * i + 2])
            {
                ans = false;
            }
        }
        return ans;
    }
};