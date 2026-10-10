class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int val = 0;
        vector<int> value(n+1, 0);
        for(int i : nums){
            if(i > 0 && i <= n){
                value[i] = 1;
            }
        }
        for(int i = 1; i<n+1; i++){
            if(value[i] == 0){
                return i;
            }
        }
        return n+1;
    }
};