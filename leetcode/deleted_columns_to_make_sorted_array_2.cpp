class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int ans = 0;
        int collen = strs[0].length();
        int n = strs.size();
        vector<bool> alreadysorted(n, false);
        for (int col = 0; col < collen; col++)
        {
            bool deleted = false;
            for (int row = 0; row < n - 1; row++)
            {
                if (!alreadysorted[row] && (strs[row][col] > strs[row + 1][col]))
                {
                    ans++;
                    deleted = true;
                    break;
                }
            }
            if (deleted)
            {
                continue;
            }
            for (int i = 0; i < n - 1; i++)
            {
                alreadysorted[i] = alreadysorted[i] | (strs[i][col] < strs[i + 1][col]);
            }
        }
        return ans;
    }
};