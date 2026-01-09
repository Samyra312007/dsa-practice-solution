class Solution {
  public:
    int floorSqrt(int n) {
        int ans = 0;
        int l = 1;
        int r = n;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(mid*mid <= n){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }
};