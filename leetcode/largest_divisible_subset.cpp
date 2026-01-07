class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1), hash(n);
        int maxi = 1;
        int li = 0;
        for(int i = 0; i<n; i++){
            hash[i] = i;
            for(int prev = 0; prev<i; prev++){
                if(nums[i]%nums[prev] == 0 && 1+dp[prev] > dp[i]){
                    dp[i] = 1+dp[prev];
                    hash[i] = prev;
                }
            }
            if(dp[i] > maxi){
                maxi = dp[i];
                li = i;
            }
        }
        vector<int> lis;
        lis.push_back(nums[li]);
        while(hash[li] != li){
            li = hash[li];
            lis.push_back(nums[li]);
        }
        reverse(lis.begin(), lis.end());
        return lis;
    }
};