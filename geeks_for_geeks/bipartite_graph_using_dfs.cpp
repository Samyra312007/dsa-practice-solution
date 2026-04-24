class Solution {
  private:
    vector<vector<int>> constructadj(int V, vector<vector<int>>& edges){
        vector<vector<int>> adj(V);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        return adj;
    }
  public:
    bool dfs(int u, int color, vector<int>& colors, vector<vector<int>>& adj){
        colors[u] = color;
        for(auto it: adj[u]){
            if(colors[it] == -1){
                if(!dfs(it, 1-color, colors, adj)) return false;
            }
            if(colors[it] == color) return false;
        }
        return true;
    }
  
    bool isBipartite(int V, vector<vector<int>> &edges) {
        vector<int> colors(V, -1);
        vector<vector<int>> adj = constructadj(V, edges);
        for(int i = 0; i<V; i++){
            if(colors[i] == -1){
                if(!dfs(i, 0, colors, adj)){
                    return false;
                }
            }
        }
        return true;
    }
};