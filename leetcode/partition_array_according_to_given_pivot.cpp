class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> left;
        vector<int> right;
        vector<int> result;
        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(nums[i] < pivot) left.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++){
            if(nums[i] > pivot) right.push_back(nums[i]);
        }
        for(int i = 0; i<left.size(); i++){
            result.push_back(left[i]);
        }
        for(int i = 0; i<mpp[pivot]; i++) result.push_back(pivot);
        for(int i = 0; i<right.size(); i++){
            result.push_back(right[i]);
        }
        return result;
    }
};