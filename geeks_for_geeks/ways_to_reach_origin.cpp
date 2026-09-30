class Solution {
  public:
    long long power(long long base, long long exp) {
        long long res = 1;
        long long mod = 1e9+7;
        base = base % mod;

        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
    long long modinv(long long n){
        return power(n, 1e9+7 - 2);
    }
    int ways(int x, int y) {
        int n = x+y;
        int r = min(x, y);
        const long long mod = 1e9 + 7;
        long long ans = 1;
        for(int i = 1; i<=r; i++){
            ans = (ans*(n-i+1))%mod;
            ans = (ans*modinv(i))%mod;
        }
        return (int)ans;
    }
};