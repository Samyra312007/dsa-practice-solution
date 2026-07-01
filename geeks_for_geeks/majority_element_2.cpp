class Solution
{
public:
    vector<int> findMajority(vector<int> &arr)
    {
        vector<int> res;
        int n = arr.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[arr[i]]++;
        }
        for (auto it : mpp)
        {
            if (it.second > floor(n / 3))
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};