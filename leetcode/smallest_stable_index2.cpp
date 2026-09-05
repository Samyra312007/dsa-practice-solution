class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int instabilityScore;
        int smallestIndex = -1;
        int largestVal = INT_MIN;
        vector<int> suffixarray(n, -1);
        suffixarray[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            suffixarray[i] = min(nums[i], suffixarray[i+1]);
        }
        for(int i = 0; i<n; i++){
            largestVal = max(largestVal, nums[i]);
            instabilityScore = largestVal - suffixarray[i];
            if(instabilityScore <= k){
                smallestIndex = i;
                break;
            }
        }
        return smallestIndex;
    }
};