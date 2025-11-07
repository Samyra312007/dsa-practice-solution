class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans;
        int mul = 1;
        int summ = 0;
        while(n != 0){
            int r = n%10;
            summ += r;
            mul *= r;
            n = n/10;
        }
        ans = mul - summ;
        return ans;
    }
};