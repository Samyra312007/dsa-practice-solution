class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int res = 0;
        for(int i = 0; i<n; i++){
            res += (s[i]^i) & 1;
        }
        res = min(res, n-res);
        return res;
    }
};