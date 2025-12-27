class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        priority_queue<int, vector<int>, greater<int>> p;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                p.push(mat[i][j]);
            }
        }
        while(k != 1){
            p.pop();
            k--;
        }
        return p.top();
    }
};
