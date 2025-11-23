class Solution {
public:
    int solve(int i, int rem, vector<int>& nums, vector<vector<int>>& t){
        if(i >= nums.size()){
            if(rem == 0) return 0;
            return INT_MIN;
        }
        if(t[i][rem] != -1){
            return t[i][rem];
        }
        int take = nums[i] + solve(i+1, (rem+nums[i])%3, nums, t);
        int skip = solve(i+1, rem, nums, t);
        return t[i][rem] = max(take, skip);
    }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> t(n, vector<int> (3, -1));
        return solve(0, 0, nums, t);
    }
};