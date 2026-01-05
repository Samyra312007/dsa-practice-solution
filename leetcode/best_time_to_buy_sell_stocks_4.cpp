class Solution {
public:
    int f(int ind, int buy, int k, vector<vector<vector<int>>>& dp, vector<int>& prices, int n){
        if(k == 0) return 0;
        if(ind == n) return 0;
        if(dp[ind][buy][k] != -1) return dp[ind][buy][k];
        int profit = 0;
        if(buy){
            profit = max(-prices[ind]+f(ind+1, 0, k, dp, prices, n), 0+f(ind+1, 1, k, dp, prices, n));
        }
        else{
            profit = max(prices[ind] + f(ind+1, 1, k-1, dp, prices, n), 0+f(ind+1, 0, k, dp, prices, n));
        }
        return dp[ind][buy][k] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (k+1, -1)));
        return f(0, 1, k, dp, prices, n);
    }
};