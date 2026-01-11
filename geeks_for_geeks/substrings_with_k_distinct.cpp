class Solution {
  public:
    int countatmost(string& s, int k){
        if(k<0) return 0;
        int n = s.length();
        int cnt = 0;
        vector<int> mpp(26, 0);
        int r = 0;
        int l = 0;
        int distinct = 0;
        while(r<n){
            if(mpp[s[r]-'a'] == 0) distinct++;
            mpp[s[r]-'a']++;
            while(distinct > k){
                mpp[s[l]-'a']--;
                if(mpp[s[l] - 'a'] == 0) distinct--;
                l = l + 1;
            }
            cnt += r - l + 1;
            r = r + 1;
        }
        return cnt;
    }
    int countSubstr(string& s, int k) {
        return countatmost(s, k) - countatmost(s, k-1);
    }
};