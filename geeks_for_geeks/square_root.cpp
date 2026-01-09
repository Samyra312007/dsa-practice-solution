class Solution {
  public:
    int floorSqrt(int n) {
        int ans = 0;
        for(int i = 0; i*i <= n; i++){
            ans = i;
        }
        return ans;
    }
};