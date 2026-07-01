class Solution
{
public:
    void rearrange(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> pos;
        vector<int> neg;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }
        int i = 0;
        int j = 0;
        int start = 0;
        while (i < pos.size() && j < neg.size())
        {
            arr[start++] = pos[i++];
            arr[start++] = neg[j++];
        }
        while (i < pos.size())
        {
            arr[start++] = pos[i++];
        }
        while (j < neg.size())
        {
            arr[start++] = neg[j++];
        }
    }
};