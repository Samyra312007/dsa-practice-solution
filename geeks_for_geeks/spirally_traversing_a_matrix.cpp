class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        vector<int> res;
        int m = mat.size();
        int n = mat[0].size();
        int tr = 0;
        int rc = n-1;
        int br = m-1;
        int lc = 0;
        while(tr <= br && lc <= rc){
            for(int i = lc; i<=rc; i++){
                res.push_back(mat[tr][i]);
            }
            tr++;
            for(int i = tr; i<=br; i++){
                res.push_back(mat[i][rc]);
            }
            rc--;
            if(tr <= br){
                for(int i = rc; i>=lc; i--){
                    res.push_back(mat[br][i]);
                }
                br--;
            }
            if(lc <= rc){
                for(int i = br; i>=tr; i--){
                    res.push_back(mat[i][lc]);
                }
                lc++;
            }
        }
        return res;
    }
};