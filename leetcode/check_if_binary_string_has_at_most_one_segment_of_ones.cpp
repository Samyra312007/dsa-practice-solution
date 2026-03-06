class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.length() == 1){
            if(s[0] == '1') return true;
            else return false;
        }
        int ans = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '1') ans++;
            while(s[i] == '1'){
                i++;
            }
        }
        if(ans <= 1 and ans >= 0){
            return true;
        }
        return false;
    }
};