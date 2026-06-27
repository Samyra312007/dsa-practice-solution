class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        bool res = false;
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i<n; i++){
            mpp[arr[i]] = i;
        }
        for(int i = 0; i<n; i++){
            int num = target - arr[i];
            if( (mpp.find(num) != mpp.end()) && (i != mpp[num])){
                return true;
            }
        }
        return false;
    }
};