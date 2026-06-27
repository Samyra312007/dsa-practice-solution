class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(nums[i] > 0 && mpp.find(-nums[i]) != mpp.end()){
                maxi = max(nums[i], maxi);
            }
        }
        return maxi;
    }
};