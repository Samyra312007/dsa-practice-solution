class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int tempcount = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            tempcount = max(count, tempcount);
        }
        return tempcount;
    }
};