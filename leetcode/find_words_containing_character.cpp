class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0; i<words.size(); i++){
            string val = words[i];
            for(int j = 0; j < val.length(); j++){
                if(val[j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};