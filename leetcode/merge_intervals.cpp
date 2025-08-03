class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i = 0; i < n; i++)
        {
            vector<int> &last = res.back();
            vector<int> &curr = intervals[i];
            if (curr[0] <= last[1])
            {
                last[1] = max(curr[1], last[1]);
            }
            else
            {
                res.push_back(curr);
            }
        }
        return res;
    }
};