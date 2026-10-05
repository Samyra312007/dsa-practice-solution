class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.length();
        int score = 0;
        vector<int> scoreStorage;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                scoreStorage.push_back(score);
                score = 0;
            }
            else{
                if(s[i-1] == '('){
                    score = scoreStorage.back()+1;
                }
                else{
                    score = scoreStorage.back()+ 2*score;
                }
                scoreStorage.pop_back();
            }
        }
        return score;
    }
};