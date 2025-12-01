class Solution
{
public:
    void solve(vector<string> &ans, vector<vector<int>> &maze, int row, int col, string st, int n)
    {
        if (row >= n || col >= n || row < 0 || col < 0 || maze[row][col] == 0)
            return;
        if (row == n - 1 && col == n - 1)
        {
            ans.push_back(st);
            return;
        }
        maze[row][col] = 0;
        solve(ans, maze, row + 1, col, st + "D", n);
        solve(ans, maze, row, col - 1, st + "L", n);
        solve(ans, maze, row, col + 1, st + "R", n);
        solve(ans, maze, row - 1, col, st + "U", n);
        maze[row][col] = 1;
        return;
    }
    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        vector<string> ans;
        int n = maze.size();
        solve(ans, maze, 0, 0, "", n);
        return ans;
    }
};