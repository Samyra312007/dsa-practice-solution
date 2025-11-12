class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int summ = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (j != i && nums[i] > nums[j])
                    summ++;
            }
            ans.push_back(summ);
        }
        return ans;
    }
};