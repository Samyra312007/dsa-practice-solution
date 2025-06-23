class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int majority = 0;
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (const auto &pair : freq)
        {
            if (pair.second > (n / 2))
            {
                majority = pair.first;
            }
        }
        return majority;
    }
};