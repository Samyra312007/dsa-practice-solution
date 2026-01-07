class Solution {
  public:
    int maxLength(string& s) {
        int n = s.length();
        string str = "";
        str.push_back(s[0]);
        for(int i = 1; i<n; i++){
            if(s[i] > str.back()){
                str.push_back(s[i]);
            }
            else{
                int ind = lower_bound(str.begin(), str.end(), s[i]) - str.begin();
                str[ind] = s[i];
            }
        }
        return str.length();
    }
};