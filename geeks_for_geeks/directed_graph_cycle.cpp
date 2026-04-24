class Solution
{
private:
    vector<vector<int>> constructadj(int v, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(v);
        for (auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        return adj;
    }
    bool dfs(int node, int vis[], int path[], vector<vector<int>> &adj)
    {
        vis[node] = 1;
        path[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (dfs(it, vis, path, adj) == true)
                    return true;
            }
            else if (path[it])
                return true;
        }
        path[node] = 0;
        return false;
    }

public:
    bool isCyclic(int V, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj = constructadj(V, edges);
        int vis[V] = {0};
        int path[V] = {0};
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (dfs(i, vis, path, adj) == true)
                    return true;
            }
        }
        return false;
    }
};