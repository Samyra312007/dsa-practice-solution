class Solution {
public:
    bool isprime(int num){
        if(num == 2) return true;
        if(num%2 == 0) return false;
        for(int i = 3; i<=sqrt(num); i += 2){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int r = nums.size();
        int c = nums[0].size();
        int maxi = 0;
        for(int i = 0; i<r; i++){
            if(nums[i][i] > 1 && isprime(nums[i][i])){
                maxi = max(maxi, nums[i][i]);
            }
            if(nums[i][r-i-1] > 1 && isprime(nums[i][r-i-1])){
                maxi = max(maxi, nums[i][r-i-1]);
            }
        }
        return maxi;
    }
};