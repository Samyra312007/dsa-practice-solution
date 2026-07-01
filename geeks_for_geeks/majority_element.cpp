class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int, int> mpp;
        int n = arr.size();
        int res = -1;
        for(int i = 0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            if(it.second > n/2){
                res = it.first;
            }
        }
        return res;
    }
};