class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int result = 0;
        int windsum = 0;
        int cntzero = 0;
        while(j<n){
            windsum += nums[j];
            while(i<j && (nums[i] == 0 || windsum > goal)){
                if(nums[i] == 0) cntzero++;
                else cntzero = 0;
                windsum -= nums[i];
                i++;
            }
            if(windsum == goal){
                result += 1+cntzero;
            }
            j++;
        }
        return result;
    }
};