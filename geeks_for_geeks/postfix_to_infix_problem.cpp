// User function Template for C++

class Solution
{
public:
    string postToInfix(string exp)
    {
        stack<string> st;
        int length = exp.size();
        for (int i = 0; i < length; i++)
        {
            if (exp[i] >= 'A' && exp[i] <= 'Z' || exp[i] >= 'a' && exp[i] <= 'z')
            {
                st.push(string(1, exp[i]));
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();

                string temp = '(' + op2 + exp[i] + op1 + ')';

                st.push(temp);
            }
        }
        return st.top();
    }
};