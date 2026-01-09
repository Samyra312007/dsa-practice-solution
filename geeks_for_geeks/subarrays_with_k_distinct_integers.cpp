class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        int cnt = 0;
        int l = 0;
        int r = 0;
        while(r < n){
            mpp[arr[r]]++;
            while(mpp.size() > k){
                mpp[arr[l]]--;
                if(mpp[arr[l]] == 0) mpp.erase(arr[l]);
                l = l + 1;
            }
            cnt += r - l + 1;
            r = r + 1;
        }
        return cnt;
    }
};