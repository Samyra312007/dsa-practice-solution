class Solution {
  public:
    int lcs(string& s1, string& s2, vector<vector<int>>& t, int m, int n){
        for(int i = 1; i<m+1; i++){
            for(int j = 1; j<n+1; j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
    int minSuperSeq(string &s1, string &s2) {
        int res = s1.length() + s2.length();
        int m = s1.length();
        int n = s2.length();
        vector<vector<int>> t(m+1, vector<int> (n+1, 0));
        int lcsl = lcs(s1, s2, t, m, n);
        return res-lcsl;
    }
};