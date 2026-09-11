class Solution {
  public:
    int sameMod(vector<int> &arr) {
        int n = arr.size();
        int g = 0;
        int cnt = 0;
        for(int i = 0; i<n; i++){
            g = __gcd(g, abs(arr[i]-arr[0]));
        }
        if(g == 0) return -1;
        for(int i = 1; i*i <= g; i++){
            if(g%i == 0){
                cnt++;
                if(i != g/i) cnt++;
            }
        }
        return cnt;
    }
};