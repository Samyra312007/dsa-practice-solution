class Solution {
  public:
    long long pairAndSum(vector<int> &arr) {
        int n = arr.size();
        long long summ = 0;
        for(int i = 0; i<32; i++){
            long long k = 0;
            for(int j = 0; j<n; j++){
                if( (arr[j] & (1LL << i)) ){
                    k++;
                }
            }
            summ += (1LL << i)*(k * (k-1) / 2);
        }
        return summ;
    }
};