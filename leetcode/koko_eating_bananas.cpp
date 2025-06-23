class Solution
{
public:
    int findmax(vector<int> &piles)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] > maxi)
            {
                maxi = piles[i];
            }
        }
        return maxi;
    }

    long long totalhr(vector<int> &piles, int h)
    {
        long long totalh = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++)
        {
            totalh += ceil((long double)piles[i] / (long double)h);
        }
        return totalh;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1;
        int high = findmax(piles);
        int ans = INT_MAX;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            long long totalhrs = totalhr(piles, mid);
            if (totalhrs <= h)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};