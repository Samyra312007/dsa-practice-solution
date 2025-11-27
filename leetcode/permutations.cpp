class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int> ds, vector<bool> pre, vector<int>& nums){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(pre[i] != true){
                pre[i] = true;
                ds.push_back(nums[i]);
                solve(ans, ds, pre, nums);
                ds.pop_back();
                pre[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> pre(nums.size(), false);
        solve(ans, ds, pre, nums);
        return ans;
    }
};