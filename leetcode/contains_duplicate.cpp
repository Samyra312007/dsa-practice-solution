class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        bool value = false;
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (const auto &pair : freq)
        {
            if (pair.second >= 2)
            {
                value = true;
            }
        }
        return value;
    }
};