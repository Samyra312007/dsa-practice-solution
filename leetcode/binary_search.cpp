// Recursive approach

class Solution
{
public:
    int binarySearch(vector<int> nums, int start, int end, int k)
    {
        if (start > end)
        {
            return -1;
        }
        int mid = (start + end) / 2;
        if (nums[mid] == k)
        {
            return mid;
        }
        if (nums[mid] < k)
        {
            return binarySearch(nums, mid + 1, end, k);
        }
        else
        {
            return binarySearch(nums, start, mid - 1, k);
        }
    }
    int search(vector<int> &nums, int target)
    {
        int ans = binarySearch(nums, 0, nums.size() - 1, target);
        return ans;
    }
};