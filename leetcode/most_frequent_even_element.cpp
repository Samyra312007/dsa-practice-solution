class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        int res = -1;
        int freq = 0;
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                mpp[nums[i]]++;
            }
        }
        for (auto it : mpp)
        {
            if (it.second > freq)
            {
                freq = it.second;
                res = it.first;
            }
        }
        return res;
    }
};