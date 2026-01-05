class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int maxsum = INT_MIN;
        int summ = 0;
        for(int i = 0; i<k; i++){
            summ += arr[i];
        }
        maxsum = max(summ, maxsum);
        for(int i = k; i<n; i++){
            summ -= arr[i-k];
            summ += arr[i];
            maxsum = max(summ, maxsum);
        }
        return maxsum;
    }
};