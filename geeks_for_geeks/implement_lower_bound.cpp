class Solution
{
public:
    int lowerBound(vector<int> &arr, int target)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int index = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= target)
            {
                index = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return index;
    }
};
