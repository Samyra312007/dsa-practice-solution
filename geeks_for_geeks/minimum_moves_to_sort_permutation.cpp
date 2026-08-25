class Solution {
  public:
    int minMoves(vector<int>& arr) {
        int res = 0;
        int n = arr.size();
        int cnt[n+1] = {0};
        for(int x: arr){
            if(cnt[x-1] != 0){
                cnt[x] = cnt[x-1]+1;
            }
            else{
                cnt[x] = 1;
            }
        }
        for(int i = 0; i<=n; i++){
            res = max(res, cnt[i]);
        }
        return n-res;
    }
};