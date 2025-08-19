class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i = 1; i<=n; i++){
            res.push_back(i);
        }
        vector<string> strnum;
        for(int num: res){
            strnum.push_back(to_string(num));
        }
        sort(strnum.begin(), strnum.end());
        vector<int> ans;
        for(auto& x: strnum){
            ans.push_back(stoi(x));
        }
        return ans;
    }
};