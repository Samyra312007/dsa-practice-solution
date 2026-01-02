class Solution {
public:
    bool isPalindrome(string& temp){
        int i = 0;
        int j = temp.length()-1;
        while(i<j){
            if(temp[i] != temp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int func(int i, int n, string& s, vector<int>& dp){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        string temp = "";
        int minCost = INT_MAX;
        for(int j = i; j<n; j++){
            temp += s[j];
            if(isPalindrome(temp)){
                int cost = (1 + func(j+1, n, s, dp));
                minCost = min(minCost, cost);
            }
        }
        return dp[i] = minCost;
    }
    int minCut(string s) {
        int n = s.length();
        vector<int> dp(n, -1);
        return func(0, n, s, dp)-1;
    }
};