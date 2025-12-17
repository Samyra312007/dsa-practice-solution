class Solution
{
public:
    int lcs(string &s, string &s1, vector<vector<int>> &t, int m, int n)
    {
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (s[i - 1] == s1[j - 1])
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
    int minDeletions(string &s)
    {
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int m = s.length();
        int n = s1.length();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));
        return s.length() - lcs(s, s1, t, m, n);
    }
};