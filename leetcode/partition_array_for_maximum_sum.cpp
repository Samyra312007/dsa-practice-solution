class Solution {
public:
    int func(int ind, int n, vector<int>& dp, int k, vector<int>& arr){
        if(ind == n) return 0;
        if(dp[ind] != -1) return dp[ind];
        int maxans = INT_MIN;
        int maxi = INT_MIN;
        int len = 0;
        for(int j = ind; j<min(n, ind+k); j++){
            len++;
            maxi = max(maxi, arr[j]);
            int sum = len*maxi + func(j+1, n, dp, k, arr);
            maxans = max(sum, maxans);
        }
        return dp[ind] = maxans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n, -1);
        return func(0, n, dp, k, arr);
    }
};