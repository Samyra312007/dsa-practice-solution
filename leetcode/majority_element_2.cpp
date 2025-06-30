class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hashmap;
        vector<int> majority;
        int n = nums.size();
        for (int num : nums)
        {
            hashmap[num]++;
        }
        for (const auto &pair : hashmap)
        {
            if (pair.second > (n / 3))
            {
                majority.push_back(pair.first);
            }
        }
        return majority;
    }
};