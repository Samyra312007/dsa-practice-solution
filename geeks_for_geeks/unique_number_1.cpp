class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int n = arr.size();
        int ans;
        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;
    }
};