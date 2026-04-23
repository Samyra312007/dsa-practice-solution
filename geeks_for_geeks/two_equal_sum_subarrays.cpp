class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        bool result = false;
        int val = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            val += arr[i];
        }
        if(val%2 != 0) return false;
        int lsum = 0;
        int rsum = val;
        for(int i = 0; i<n; i++){
            if(lsum == rsum) return true;
            lsum += arr[i];
            rsum -= arr[i];
        }
        return false;
    }
};
