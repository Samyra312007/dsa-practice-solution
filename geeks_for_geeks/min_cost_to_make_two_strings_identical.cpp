class Solution
{
public:
    int lcs(string &s1, string &s2)
    {
        int len1 = s1.length();
        int len2 = s2.length();
        vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j <= len2; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[len1][len2];
    }
    int findMinCost(string &s1, string &s2, int costS1, int costS2)
    {
        int n = s1.length();
        int m = s2.length();
        int lcslen = lcs(s1, s2);
        int res = (n - lcslen) * costS1 + (m - lcslen) * costS2;
        return res;
    }
};