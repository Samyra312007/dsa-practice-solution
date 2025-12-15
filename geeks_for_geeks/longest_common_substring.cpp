class Solution {
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        int m = s1.length();
        int n = s2.length();
        int ans = 0;
        vector<vector<int>> t(m+1, vector<int> (n+1, 0));
        for(int i = 1; i<m+1; i++){
            for(int j = 1; j<n+1; j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] = t[i-1][j-1] + 1;
                    ans = max(ans, t[i][j]);
                }
                else t[i][j] = 0;
            }
        }
        return ans;
    }
};