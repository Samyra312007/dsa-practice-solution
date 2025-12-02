class Solution
{
public:
    int countTrapezoids(vector<vector<int>> &points)
    {
        unordered_map<int, int> ycnt;
        long long int cnt = 0;
        int mod = 1e9 + 7;
        long long int horizontal = 0;
        long long int totalprev = 0;
        for (int i = 0; i < points.size(); i++)
        {
            ycnt[points[i][1]]++;
        }
        if (ycnt.size() == 1)
            return 0;
        for (auto num : ycnt)
        {
            long long int count = num.second;
            horizontal = (count * (count - 1)) / 2;
            cnt += horizontal * totalprev;
            totalprev += horizontal;
        }
        return cnt % mod;
    }
};