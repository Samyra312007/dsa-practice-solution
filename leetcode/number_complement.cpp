class Solution {
public:
    int findComplement(int num) {
        string bin = "";
        int n = num;
        while(n > 0){
            if(n%2 == 0) bin += "0";
            else bin += "1";
            n = n/2;
        }
        bin += "1";
        string res = "";
        int ans = 0;
        for(int i = bin.length()-1; i >= 0; i--){
            res += (bin[i] == '1') ? '0' : '1';
        }
        reverse(res.begin(), res.end());
        for(int i = res.length()-1; i >= 0; i--){
            ans = ans + (res[i]- '0')*(1<<i);
        }
        return ans;
    }
};