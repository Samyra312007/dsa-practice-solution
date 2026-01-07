class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i = 0; i<k; i++){
            mpp[arr[i]]++;
        }
        ans.push_back(mpp.size());
        for(int i = k; i<n; i++){
            mpp[arr[i-k]]--;
            if(mpp[arr[i-k]] == 0) mpp.erase(arr[i-k]);
            mpp[arr[i]]++;
            ans.push_back(mpp.size());
        }
        return ans;
    }
};