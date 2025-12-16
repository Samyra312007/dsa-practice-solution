class Solution {
public:
    map<pair<int,int>, set<string>> memo;

    void lcs(string& s1, string &s2, int m, int n, vector<vector<int>>& t){
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(s1[i-1] == s2[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i][j-1], t[i-1][j]);
            }
        }
    }

    set<string> find(vector<vector<int>>& t, int i, int j,
                     string& s1, string& s2){

        if(i == 0 || j == 0)
            return {""};

        if(memo.count({i, j}))
            return memo[{i, j}];

        set<string> res;

        if(s1[i-1] == s2[j-1]){
            auto prev = find(t, i-1, j-1, s1, s2);
            for(auto &str : prev)
                res.insert(str + s1[i-1]);
        }
        else{
            if(t[i][j-1] >= t[i-1][j]){
                auto left = find(t, i, j-1, s1, s2);
                res.insert(left.begin(), left.end());
            }
            if(t[i][j-1] <= t[i-1][j]){
                auto up = find(t, i-1, j, s1, s2);
                res.insert(up.begin(), up.end());
            }
        }

        return memo[{i, j}] = res;
    }

    vector<string> allLCS(string &s1, string &s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>> t(m+1, vector<int>(n+1, 0));

        lcs(s1, s2, m, n, t);
        memo.clear();

        auto ansSet = find(t, m, n, s1, s2);
        return vector<string>(ansSet.begin(), ansSet.end());
    }
};