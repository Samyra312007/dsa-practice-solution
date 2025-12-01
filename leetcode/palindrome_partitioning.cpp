class Solution
{
public:
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void solve(int ind, vector<string> path, vector<vector<string>> &ans, string &s)
    {
        if (ind == s.length())
        {
            ans.push_back(path);
            return;
        }
        for (int i = ind; i < s.length(); ++i)
        {
            if (isPalindrome(s, ind, i))
            {
                path.push_back(s.substr(ind, i - ind + 1));
                solve(i + 1, path, ans, s);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> path;
        solve(0, path, ans, s);
        return ans;
    }
};