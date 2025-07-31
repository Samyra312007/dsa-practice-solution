class Solution
{
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        int na = a.size();
        int nb = b.size();
        vector<int> ans;
        set<int> st;
        for (int i = 0; i < na; i++)
        {
            st.insert(a[i]);
        }
        for (int j = 0; j < nb; j++)
        {
            st.insert(b[j]);
        }
        for (int val : st)
        {
            ans.push_back(val);
        }
        return ans;
    }
};