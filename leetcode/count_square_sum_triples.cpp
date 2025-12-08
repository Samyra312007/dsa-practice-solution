class Solution {
public:
    int countTriples(int n) {
        int cnt = 0;
        for(int i = 1; i<n; i++){
            for(int j = i+1; j<=n; j++){
                float val = hypot(i, j);
                if(floor(val) == val && val <= n) cnt += 2;
            }
        }
        return cnt;
    }
};