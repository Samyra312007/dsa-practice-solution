class Solution
{
public:
    int lcs(string &s, string &s1, int m, int n, vector<vector<int>> &t)
    {
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (s[i - 1] == s1[j - 1] && i != j)
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        return t[m][n];
    }
    int LongestRepeatingSubsequence(string &s)
    {
        string s1 = s;
        int m = s.length();
        int n = s.length();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));
        return lcs(s, s1, m, n, t);
    }
};