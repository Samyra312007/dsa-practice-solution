// User function Template for C++

class Solution
{
public:
    string postToPre(string post_exp)
    {
        stack<string> st;
        int length = post_exp.size();
        for (int i = 0; i < length; i++)
        {
            if (post_exp[i] >= 'A' && post_exp[i] <= 'Z' || post_exp[i] >= 'a' && post_exp[i] <= 'z')
            {
                st.push(string(1, post_exp[i]));
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();

                string temp = post_exp[i] + op2 + op1;

                st.push(temp);
            }
        }
        return st.top();
    }
};