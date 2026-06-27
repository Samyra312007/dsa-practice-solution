class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.length();
        vector<int> mpp(26, -1);
        for(int i = 0; i<n; i++){
            if(mpp[s[i] - 'a'] == -1){
                mpp[s[i] - 'a'] = i+1;
            }
            else{
                mpp[s[i] - 'a'] = i - mpp[s[i] - 'a'];
                if(distance[s[i] - 'a'] != mpp[s[i] - 'a']){
                    return false;
                }
            }
        }
        return true;
    }
};