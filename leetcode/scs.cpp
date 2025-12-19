class Solution {
public:
    void lcs(string& a, string& b, int m, int n, vector<vector<int>>& t){
        for(int i = 1; i<m+1; i++){
            for(int j = 1; j<n+1; j++){
                if(a[i-1] == b[j-1]){
                    t[i][j] = 1+t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string a = str1;
        string b = str2;
        string ans = "";
        int m = str1.length();
        int n = str2.length();
        vector<vector<int>> t(m+1, vector<int> (n+1, 0));
        lcs(a, b, m, n, t);
        int i = m;
        int j = n;
        while(i>0 && j>0){
            if(a[i-1] == b[j-1]){
                ans.push_back(a[i-1]);
                i--;
                j--;
            }
            else{
                if(t[i][j-1] > t[i-1][j]){
                    ans.push_back(b[j-1]);
                    j--;
                }
                else{
                    ans.push_back(a[i-1]);
                    i--;
                }
            }
        }
        while(i>0){
            ans.push_back(a[i-1]);
            i--;
        }
        while(j>0){
            ans.push_back(b[j-1]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};