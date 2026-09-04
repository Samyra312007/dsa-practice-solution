class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        int n = arr.size();
        int res = 0;
        int window = 0;
        for(int i = 0; i<m; i++){
            window += arr[i];
            res = max(res, window);
        }
        for(int i = m; i<n+m-1; i++){
            window += arr[i%n];
            window -= arr[(i-m)%n];
            res = max(res, window);
        }
        return res;
    }
};