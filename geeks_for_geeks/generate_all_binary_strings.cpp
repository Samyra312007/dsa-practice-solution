class Solution {
  public:
    void helper(vector<string>& res, string curr, int n){
        if(curr.length() == n){
            res.push_back(curr);
            return;
        }
        helper(res, curr+'0', n);
        helper(res, curr+'1', n);
    }
    vector<string> binstr(int n) {
        vector<string> res;
        helper(res, "",  n);
        return res;
    }
};