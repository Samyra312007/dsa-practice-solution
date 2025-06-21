class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> twice;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] == nums[i])
            {
                twice.push_back(nums[i]);
            }
        }
        return twice;
    }
};