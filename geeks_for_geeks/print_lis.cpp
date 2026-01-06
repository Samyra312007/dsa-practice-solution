class Solution {
  public:
    vector<int> getLIS(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 1), hash(n);
        int maxi = 1;
        int li = 0;
        for(int i = 0; i<n; i++){
            hash[i] = i;
            for(int prev = 0; prev<i; prev++){
                if(arr[prev] < arr[i] && 1+dp[prev] > dp[i]){
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
        lis.push_back(arr[li]);
        while(hash[li] != li){
            li = hash[li];
            lis.push_back(arr[li]);
        }
        reverse(lis.begin(), lis.end());
        return lis;
    }
};