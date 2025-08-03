class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int duplicate = -1;
        long long actual_sum = 0;
        for (int i = 0; i < n; i++)
        {
            actual_sum += arr[i];
            if (i > 0 && arr[i] == arr[i - 1])
            {
                duplicate = arr[i - 1];
            }
        }
        int expected_sum = (1LL * n * (n + 1)) / 2;
        int missing = expected_sum - (actual_sum - duplicate);
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};