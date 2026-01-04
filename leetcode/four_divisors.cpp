class Solution {
public:
    int divis(int val, int count, int& value){
        for(int i = 1; i*i<=val; i++){
            if(val%i == 0){
                if(i == val/i){
                    count++;
                    value += i;
                }
                else{
                    count += 2;
                    value += (i + val/i);
                }
            }
        }
        if(count == 4) return value;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            int count = 0;
            int value = 0;
            int num = divis(nums[i], count, value);
            ans += num;
        }
        return ans;
    }
};