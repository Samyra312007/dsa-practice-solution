class Solution {
  public:
    vector<vector<int>> create(vector<vector<int>>& edges, int V){
        vector<vector<int>> adj(V);
        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
        }
        return adj;
    }
  
    void dfs(int node, int vis[], stack<int>& st, vector<vector<int>>& adjL){
        vis[node] = 1;
        for(auto it: adjL[node]){
            if(!vis[it]){
                dfs(it, vis, st, adjL);
            }
        }
        st.push(node);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        int vis[V] = {0};
        stack<int> st;
        vector<vector<int>> adjL = create(edges, V);
        for(int i = 0; i<V; i++){
            if(!vis[i]){
                dfs(i, vis, st, adjL);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};