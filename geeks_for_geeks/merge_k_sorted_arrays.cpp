class Solution
{
public:
    vector<int> mergeArrays(vector<vector<int>> &mat)
    {
        vector<pair<int, pair<int, int>>> ans;
        for (int i = 0; i < mat.size(); i++)
        {
            ans.push_back(make_pair(mat[i][0], make_pair(i, 0)));
        }
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p(ans.begin(), ans.end());

        vector<int> res;
        pair<int, pair<int, int>> elem;
        int i;
        int j;
        while (!p.empty())
        {
            elem = p.top();
            p.pop();
            res.push_back(elem.first);
            i = elem.second.first;
            j = elem.second.second;
            if (j + 1 < mat[i].size())
            {
                p.push(make_pair(mat[i][j + 1], make_pair(i, j + 1)));
            }
        }
        return res;
    }
};