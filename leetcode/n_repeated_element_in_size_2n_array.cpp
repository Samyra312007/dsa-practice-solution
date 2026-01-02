class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans = 0;
        int m = nums.size();
        int n = m/2;
        unordered_map<int, int> mpp;
        for(int i = 0; i<m; i++) mpp[nums[i]]++;
        for(auto it: mpp){
            if(it.second >= n){
                ans = it.first;
            }
        }
        return ans;
    }
};