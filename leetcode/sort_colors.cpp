class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        int ptr = 0;
        while (ptr <= right)
        {
            if (nums[ptr] == 0)
            {
                swap(nums[ptr], nums[left]);
                left++;
                ptr++;
            }
            else if (nums[ptr] == 2)
            {
                swap(nums[ptr], nums[right]);
                right--;
            }
            else
            {
                ptr++;
            }
        }
    }
};