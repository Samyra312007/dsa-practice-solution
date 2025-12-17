class Solution
{
public:
    int lcs(string &word1, string &word2, vector<vector<int>> &t, int m, int n)
    {
        for (int i = 0; i <= m; i++)
            t[i][0] = i;
        for (int j = 0; j <= n; j++)
            t[0][j] = j;
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    t[i][j] = t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = 1 + min({t[i - 1][j - 1], t[i - 1][j], t[i][j - 1]});
                }
            }
        }
        return t[m][n];
    }
    int minDistance(string word1, string word2)
    {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> t(m + 1, vector<int>(n + 1, 0));
        int val = lcs(word1, word2, t, m, n);
        return val;
    }
};