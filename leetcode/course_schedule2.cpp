class Solution
{
private:
    bool dfs(int node, vector<int> &vis, stack<int> &st, vector<vector<int>> &adj)
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (vis[it] == 0)
            {
                if (dfs(it, vis, st, adj))
                    return true;
            }
            else if (vis[it] == 1)
                return true;
        }
        vis[node] = 2;
        st.push(node);
        return false;
    }

public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(numCourses);
        for (auto &pre : prerequisites)
        {
            adj[pre[1]].push_back(pre[0]);
        }
        vector<int> vis(numCourses, 0);
        stack<int> st;
        for (int i = 0; i < numCourses; i++)
        {
            if (vis[i] == 0)
            {
                if (dfs(i, vis, st, adj))
                    return {};
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};