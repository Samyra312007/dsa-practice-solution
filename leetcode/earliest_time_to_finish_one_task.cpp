class Solution
{
public:
    int earliestTime(vector<vector<int>> &tasks)
    {
        int n = tasks.size();
        if (n == 1)
            return tasks[0][0] + tasks[0][1];
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int mi = min(tasks[i][0] + tasks[i][1], tasks[i + 1][0] + tasks[i + 1][1]);
            mini = min(mi, mini);
        }
        return mini;
    }
};