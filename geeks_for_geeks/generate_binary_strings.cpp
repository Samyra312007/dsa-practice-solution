class Solution
{
public:
    void helper(vector<string> &ans, string &s, int i)
    {
        int n = s.size();
        if (i == n)
        {
            ans.push_back(s);
            return;
        }
        s[i] = '0';
        helper(ans, s, i + 1);
        s[i] = '1';
        helper(ans, s, i + 1);
    }
    vector<string> binstr(int n)
    {
        string s(n, '0');
        vector<string> ans;
        helper(ans, s, 0);
        return ans;
    }
};