// User function Template for C++

class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        int n = pre_exp.length();
        int i = n - 1;
        stack<string> st;
        while (i >= 0)
        {
            if (pre_exp[i] >= 'A' && pre_exp[i] <= 'Z' || pre_exp[i] >= 'a' && pre_exp[i] <= 'z')
            {
                st.push(string(1, pre_exp[i]));
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                string temp = "(" + op1 + pre_exp[i] + op2 + ")";
                st.push(temp);
            }
            i--;
        }
        return st.top();
    }
};