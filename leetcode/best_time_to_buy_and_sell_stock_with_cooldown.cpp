class Solution {
public:
    int f(int ind, int buy, vector<vector<int>>& dp, vector<int>& prices, int n){
        if(ind >= n) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        int profit = 0;
        if(buy){
            profit = max(-prices[ind]+f(ind+1, 0, dp, prices, n), 0+f(ind+1, 1, dp, prices, n));
        }
        else{
            profit = max(prices[ind]+f(ind+2, 1, dp, prices, n), 0+f(ind+1, 0, dp, prices, n));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int> (2, -1));
        return f(0, 1, dp, prices, n);
    }
};