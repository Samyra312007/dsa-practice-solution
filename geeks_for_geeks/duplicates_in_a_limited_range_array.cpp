class Solution
{
public:
    vector<int> findDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> res;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }
        for (auto it : mpp)
        {
            if (it.second > 1)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};