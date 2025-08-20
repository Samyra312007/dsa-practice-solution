class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = 0;
        int tl = 0;
        int cnt = 0;
        if(s == "") return true;
        if(t == "") return false;
        while(tl<t.length()){
            if(s[sl] == t[tl]){
                cnt++;
                sl++;
                tl++;
            }
            else tl++;
            if(cnt == s.length()) return true;
        }
        return false;
    }
};