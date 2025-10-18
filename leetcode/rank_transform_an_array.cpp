class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        unordered_map<int, int> map;
        vector<int> dum(arr.size(), 0);
        for (int i = 0; i < arr.size(); i++)
        {
            dum[i] = arr[i];
        }
        int temp = 1;
        sort(dum.begin(), dum.end());
        for (int i = 0; i < arr.size(); i++)
        {
            if (map[dum[i]] == 0)
            {
                map[dum[i]] = temp;
                temp++;
            }
        }
        vector<int> res;
        for (int i = 0; i < arr.size(); i++)
        {
            res.push_back(map[arr[i]]);
        }
        return res;
    }
};