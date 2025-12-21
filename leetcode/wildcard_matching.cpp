class Solution
{
public:
    int lcs(string &s, string &p, int m, int n, vector<vector<int>> &t)
    {
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
                {
                    t[i][j] = t[i - 1][j - 1];
                }
                if (p[j - 1] == '*')
                {
                    t[i][j] = t[i - 1][j] || t[i][j - 1];
                }
            }
        }
        return t[m][n];
    }
    bool isMatch(string s, string p)
    {
        int m = s.length();
        int n = p.length();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, false));
        t[0][0] = true;
        for (int i = 1; i <= n; i++)
        {
            if (p[i - 1] == '*')
            {
                t[0][i] = t[0][i - 1];
            }
        }
        return lcs(s, p, m, n, t);
    }
};