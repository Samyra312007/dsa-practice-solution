class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size()+1;
        int summ = 0;
        for(int i = 0; i<n-1; i++) summ += arr[i];
        int summcal = (n*1LL*(n+1))/2;
        return summcal - summ;
    }
};