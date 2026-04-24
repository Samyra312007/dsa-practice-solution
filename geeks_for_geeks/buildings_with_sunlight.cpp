class Solution
{
public:
    int visibleBuildings(vector<int> &arr)
    {
        int n = arr.size();
        int receive = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= receive)
            {
                count++;
                receive = arr[i];
            }
        }
        return count;
    }
};