class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int missing = INT_MAX;
        unordered_map<int, int> mpp;
        int n = nums.size();
        int multiple;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(int i = 1; i<= n; i++){
            multiple = k*i;
            if(mpp.find(multiple) == mpp.end()){
                missing = min(missing, multiple);
            }
        }
        return missing;
    }
};