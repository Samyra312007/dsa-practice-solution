class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        int maxval = INT_MIN;
        int val = 0;
        for(int i = 0; i<k; i++){
            val ^= arr[i];
        }
        maxval = max(maxval, val);
        for(int i = k; i<n; i++){
            val ^= arr[i-k];
            val ^= arr[i];
            maxval = max(maxval, val);
        }
        return maxval;
    }
};