//Naive approach

class Solution
{
public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int> &arr)
    {
        int n = arr.size();
        if (arr.empty())
            return 0;
        sort(arr.begin(), arr.end());
        int maxres = 1;
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
                continue;
            else if (arr[i] == arr[i - 1] + 1)
            {
                res++;
            }
            else
            {
                res = 1;
            }
            maxres = max(res, maxres);
        }
        return maxres;
    }
};