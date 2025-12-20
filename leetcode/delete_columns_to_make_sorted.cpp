class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int n = strs.size();
        int comlen = strs[0].length();
        for(int i = 0; i<comlen; i++){
            for(int j = 1; j<n; j++){
                if(strs[j][i] < strs[j-1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};