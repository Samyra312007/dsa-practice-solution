#include <vector>
#include <stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}