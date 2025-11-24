class Solution
{
public:
    void solve(string digits, vector<string> &ans, int i, string s, map<char, string> &mpp)
    {
        if (i == digits.length())
        {
            ans.push_back(s);
            return;
        }
        for (char c : mpp[digits[i]])
        {
            solve(digits, ans, i + 1, s + c, mpp);
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        map<char, string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";
        solve(digits, ans, 0, "", mpp);
        return ans;
    }
};