class Solution
{
public:
    void sortIt(vector<int> &arr)
    {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
                even.push_back(arr[i]);
            else
                odd.push_back(arr[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        for (int i = 0; i < arr.size(); i++)
        {
            if (i < odd.size())
            {
                arr[i] = odd[i];
            }
            else
            {
                arr[i] = even[i - odd.size()];
            }
        }
    }
};