// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        long long ans = 0;
        long long summ = 0;
        sort(bt.begin(), bt.end());
        for(int i = 0; i<bt.size(); i++){
            ans += summ;
            summ += bt[i];
        }
        return ans/bt.size();
    }
};