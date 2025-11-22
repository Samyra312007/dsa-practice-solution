class Solution
{
public:
    bool isvalid(string s)
    {
        int n = s.length();
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;
                char top = st.top();
                if (s[i] == ')' && top == '(')
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();
    }
    void helper(vector<string> &ans, string s, int n)
    {
        if (s.length() == 2 * n)
        {
            if (isvalid(s))
                ans.push_back(s);
            return;
        }
        helper(ans, s + '(', n);
        helper(ans, s + ')', n);
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        helper(ans, "", n);
        return ans;
    }
};