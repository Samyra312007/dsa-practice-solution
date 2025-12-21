class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0; i<queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int val = queries[i][2];
            int left = lower_bound(arr.begin(), arr.end(), val) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), val) - arr.begin();
            int start = max(l, left);
            int end = min(r+1, right);
            if(start < end){
                ans.push_back(end - start);
            }
            else ans.push_back(0);
        }
        return ans;
    }
};