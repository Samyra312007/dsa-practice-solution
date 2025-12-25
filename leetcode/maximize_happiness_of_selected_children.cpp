class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        long long ans = 0;
        int j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k == 0)
                break;
            ans += max(happiness[i] - j, 0);
            j++;
            k--;
        }
        return ans;
    }
};