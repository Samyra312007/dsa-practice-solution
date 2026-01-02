// User function Template for C++
#define ll long long

class Solution {
  public:
    long long func(int i, int j, int isTrue, string&s, vector<vector<vector<ll>>>& dp){
        if(i>j) return 0;
        if(i==j){
            if(isTrue == 1) return s[i] == 'T' ? 1 : 0;
            else return s[i] == 'F' ? 1 : 0;
        }
        if(dp[i][j][isTrue] != -1) return dp[i][j][isTrue];
        ll ways = 0;
        for(int ind = i+1; ind <= j-1; ind = ind+2){
            ll lT = func(i, ind-1, 1, s, dp);
            ll lF = func(i, ind-1, 0, s, dp);
            ll rT = func(ind+1, j, 1, s, dp);
            ll rF = func(ind+1, j, 0, s, dp);
            if(s[ind] == '&'){
                if(isTrue){
                    ways = ways + (lT*rT);
                }
                else ways = ways + ((lT*rF)+(lF*rT)+(rF*lF));
            }
            else if(s[ind] == '|'){
                if(isTrue){
                    ways = ways + ((lT*rT)+(lF*rT)+(rF*lT));
                }
                else ways = ways + (lF*rF);
            }
            else if(s[ind] == '^'){
                if(isTrue){
                    ways = ways + ((lF*rT) + (rF*lT));
                }
                else ways = ways + ((lF*rF) + (rT*lT));
            }
        }
        return dp[i][j][isTrue] = ways;
    }
    int countWays(string &s) {
        int n = s.length();
        vector<vector<vector<ll>>> dp(n, vector<vector<ll>> (n, vector<ll> (2, -1)));
        return func(0, n-1, 1, s, dp);
    }
};