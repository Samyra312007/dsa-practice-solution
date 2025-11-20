class Solution {
public:
    long long fast(long long a, long long n){
        long long result = 1;
        while(n > 0){
            if(n&1){
                result = (result*a) % 1000000007;
            }
            a = (a*a)%1000000007;
            n >>= 1;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long num1 = fast(5, (n+1)/2);
        long long num2 = fast(4, n/2);
        long long val = (num1 * num2) % 1000000007;
        return val % 1000000007;
    }
};