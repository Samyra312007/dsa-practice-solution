class Solution {
public:
    int f(int ind, int buy, int cap, vector<vector<vector<int>>>& dp, vector<int>& prices, int n){
        if(cap == 0) return 0;
        if(ind == n) return 0;
        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
        int profit = 0;
        if(buy){
            profit = max(-prices[ind]+f(ind+1, 0, cap, dp, prices, n), 0+f(ind+1, 1, cap, dp, prices, n));
        }
        else{
            profit = max(prices[ind]+f(ind+1, 1, cap-1, dp, prices, n), 0+f(ind+1, 0, cap, dp, prices, n));
        }
        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (3, -1)));
        return f(0, 1, 2, dp, prices, n);
    }
};