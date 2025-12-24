class Solution
{
public:
    int findFloor(vector<int> &arr, int x)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int index = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                index = mid;
                start = mid + 1;
            }
        }
        return index;
    }
};
