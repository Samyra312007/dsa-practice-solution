class Solution
{
public:
    bool binarySearch(vector<int> &arr, int k)
    {
        bool res = false;
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k)
            {
                res = true;
                break;
            }
            else if (arr[mid] < k)
            {
                start = mid + 1;
            }
            else if (arr[mid] > k)
            {
                end = mid - 1;
            }
        }
        return res;
    }
};