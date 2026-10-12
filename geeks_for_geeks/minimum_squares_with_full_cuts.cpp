class Solution {
  public:
    int minSquares(int n, int m) {
        int res = 0;
        while(n > 0 && m > 0){
            if(m < n){
                swap(n, m);
            }
            res += m/n;
            m = m%n;
        }
        return res;
    }
};