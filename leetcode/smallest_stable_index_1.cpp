class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int instabilityScore;
        int smallestIndex = -1;
        int largestVal = INT_MIN;
        for(int i = 0; i<n; i++){
            int smallestVal = INT_MAX;
            int backward = n-1;
            largestVal = max(largestVal, nums[i]);
            while(backward >= i){
                smallestVal = min(smallestVal, nums[backward]);
                backward--;
            }
            instabilityScore = largestVal - smallestVal;
            if(instabilityScore <= k){
                smallestIndex = i;
                break;
            }
        }
        return smallestIndex;
    }
};