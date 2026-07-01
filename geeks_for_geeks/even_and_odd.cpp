class Solution
{
public:
    void reArrange(int arr[], int N)
    {
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }
        int i = 0;
        int j = 0;
        int start = 0;
        while (start < N)
        {
            if (start % 2 == 0)
            {
                arr[start++] = even[i++];
            }
            else
            {
                arr[start++] = odd[j++];
            }
        }
    }
};