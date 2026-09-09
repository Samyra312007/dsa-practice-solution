class Solution {
  public:
    int digisum(int n){
        int summ = 0;
        while(n != 0){
            summ += (n%10);
            n /= 10;
        }
        return summ;
    }
    int findMax(int n) {
        int res = n;
        int ressum = digisum(n);
        int x = n;
        int b = 1;
        while(x > 0){
            int cur = (x-1)*b+(b-1);
            int sum = digisum(cur);
            if(sum > ressum || (sum == ressum && cur > res)){
                res = cur;
                ressum = sum;
            }
            x /= 10;
            b *= 10;
        }
        return res;
    }
};