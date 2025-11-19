class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int> mpp;
        for(auto num : nums){
            mpp[num]++;
        }
        bool flag = true;
        while(flag){
            for(auto it: mpp){
                if(mpp.find(original) != mpp.end()){
                    original = 2*original;
                }
                else{
                    flag = false;
                }
            }
        }
        return original;
    }
};