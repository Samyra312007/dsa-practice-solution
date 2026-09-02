class Solution {
  public:
    int solve(int n, string s) {
        int notget = 0;
        int l = s.length();
        unordered_map<char, int> lastarrival;
        for(int i = 0; i<l; i++){
            if(lastarrival[s[i]] == 0){
                if(n>0){
                    lastarrival[s[i]] = 1;
                    n--;
                }
                else{
                    lastarrival[s[i]] = 2;
                    notget++;
                }
            }
            else if(lastarrival[s[i]] == 1){
                lastarrival[s[i]] = 2;
                n++;
            }
        }
        return notget;
    }
};
