class Solution
{
public:
    void dfs(vector<bool> &visited, vector<vector<int>> &isConnected, int i)
    {
        visited[i] = true;
        for (int j = 0; j < isConnected.size(); j++)
        {
            if (isConnected[i][j] == 1 && !visited[j])
            {
                dfs(visited, isConnected, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        int count = 0;
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(visited, isConnected, i);
                count++;
            }
        }
        return count;
    }
};