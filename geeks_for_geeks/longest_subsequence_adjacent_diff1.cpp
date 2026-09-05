class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        int n = arr.size();
        int len = 0;
        unordered_map<int, int> dp;
        for(int i = 0; i<n; i++){
            if( (dp.find(arr[i] + 1) != dp.end()) || (dp.find(arr[i] - 1) != dp.end())){
                dp[arr[i]] = 1 + max(dp[arr[i]+1], dp[arr[i]-1]);
            }
            else{
                dp[arr[i]] = 1;
            }
        }
        for(auto it: dp){
            len = max(len, it.second);
        }
        return len;
    }
};