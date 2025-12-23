class Solution
{
public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < queries.size(); i++)
        {
            int a = queries[i][0];
            int b = queries[i][1];
            int left = lower_bound(arr.begin(), arr.end(), a) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), b) - arr.begin();
            ans.push_back(right - left);
        }
        return ans;
    }
};