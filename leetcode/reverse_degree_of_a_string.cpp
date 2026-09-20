class Solution
{
public:
    int reverseDegree(string s)
    {
        int n = s.length();
        vector<char> rev(27, 'z');
        for (int i = 2; i <= 26; i++)
        {
            rev[i] = rev[i - 1] - 1;
        }
        int rd = 0;
        for (int i = 0; i < n; i++)
        {
            auto it = find(rev.begin() + 1, rev.end(), s[i]);
            int pos = it - rev.begin();
            rd += pos * (i + 1);
        }
        return rd;
    }
};