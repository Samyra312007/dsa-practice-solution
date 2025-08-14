class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        int l = 0;
        int r = 1;
        int cnt = 1;
        int large = INT_MIN;
        while(r<n){
            string res = "";
            if(num[l]!=num[r]){
                cnt = 1;
                r++;
                l = r-1;
            }
            else{
                cnt++;
                if(cnt==3){
                    for(int i = l; i<r+1; i++){
                        res = res + num[i];
                    }
                    large = max(stoi(res), large);
                }
                r++;
            }
        }
        if(large<0) return "";
        if(large == 0) return "000";
        string largegood = to_string(large);
        return largegood;
    }
};