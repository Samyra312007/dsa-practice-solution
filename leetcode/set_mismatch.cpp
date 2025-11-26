class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> ans;
        unordered_map<int, int> mpp;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                ans.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
            mpp[nums[i]]++;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (mpp.find(i) == mpp.end())
                ans.push_back(i);
        }
        return ans;
    }
};