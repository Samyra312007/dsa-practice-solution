class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxi = -1;
        int pos = 0;
        int neg = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] > 0) pos++;
            else if(nums[i] < 0) neg++;
        }
        maxi = max(maxi, max(pos, neg));
        return maxi;
    }
};