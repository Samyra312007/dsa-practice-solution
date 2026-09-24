class Solution {
public:
    int summ(int val){
        int sum = 0;
        while(val != 0){
            int rem = val%10;
            sum += rem;
            val /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int res = -1;
        for(int i = 0; i<n; i++){
            int digit = summ(nums[i]);
            if(digit == i){
                res = i;
                break;
            }
        }
        return res;
    }
};