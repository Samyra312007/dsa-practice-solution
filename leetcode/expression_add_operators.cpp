class Solution
{
public:
    void solve(int ind, string &num, int target, string curr, vector<string> &ans, long long prev, long res)
    {
        if (ind == num.size())
        {
            if (res == target)
                ans.push_back(curr);
            return;
        }
        string st = "";
        long long curRes = 0;
        for (int i = ind; i < num.length(); i++)
        {
            if (i > ind && num[ind] == '0')
                break;
            st += num[i];
            curRes = curRes * 10 + (num[i] - '0');
            if (ind == 0)
            {
                solve(i + 1, num, target, st, ans, curRes, curRes);
            }
            else
            {
                solve(i + 1, num, target, curr + "+" + st, ans, curRes, res + curRes);
                solve(i + 1, num, target, curr + "-" + st, ans, -curRes, res - curRes);
                solve(i + 1, num, target, curr + "*" + st, ans, prev * curRes, res - prev + (prev * curRes));
            }
        }
    }
    vector<string> addOperators(string num, int target)
    {
        vector<string> ans;
        solve(0, num, target, "", ans, 0, 0);
        return ans;
    }
};