class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        vector<int> res;
        int n = arr.size();
        int m = queries.size();
        vector<int> prefix(n+1, 0);
        for(int i = 1; i<=n; i++){
            prefix[i] = arr[i-1] + prefix[i-1];
        }
        for(int i = 0; i<m; i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int summ = prefix[r+1] - prefix[l];
            int mean = summ/(r-l+1);
            res.push_back(mean);
        }
        return res;
    }
};