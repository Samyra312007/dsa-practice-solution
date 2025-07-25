// User function Template for C++

class Solution
{
public:
    string preToPost(string pre_exp)
    {
        stack<string> st;
        int length = pre_exp.size();
        for (int i = length - 1; i >= 0; i--)
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

                string temp = op1 + op2 + pre_exp[i];

                st.push(temp);
            }
        }
        return st.top();
    }
};