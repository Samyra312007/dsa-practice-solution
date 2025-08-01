class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        int minCost = prices[0];
        for (int i = 1; i < n; i++)
        {
            int currprofit = prices[i] - minCost;
            profit = max(currprofit, profit);
            if (prices[i] < minCost)
            {
                minCost = prices[i];
            }
        }
        return profit;
    }
};