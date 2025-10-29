class Solution {
  public:
    void dfs(int start, vector<vector<int>>& adj, vector<int>& vis, vector<int>& dfsval){
        vis[start] = 1;
        dfsval.push_back(start);
        for(auto it: adj[start]){
            if(!vis[it]){
                dfs(it, adj, vis, dfsval);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int> vis(adj.size(), 0);
        int start = 0;
        vector<int> dfsval;
        dfs(start, adj, vis, dfsval);
        return dfsval;
    }
};