class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        int n = arr.size();
        int count = 0;
        sort(arr.begin(), arr.end()-n/2);
        sort(arr.begin()+n/2, arr.end());
        int i = 0;
        int j = n/2;
        while(i<n/2){
            while(j < n && arr[i] >= 5*arr[j]){
                j++;
            }
            count += (j - n/2);
            i++;
        }
        return count;
    }
};