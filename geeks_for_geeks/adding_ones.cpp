class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        vector<int> res(n, 0);
        for(int j : updates){
            res[j-1]++;
        }
        int count = 0;
        for(int i = 0; i<n; i++){
            count += res[i];
            res[i] = count;
        }
        return res;
    }
};