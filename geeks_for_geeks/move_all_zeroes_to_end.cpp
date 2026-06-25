class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] != 0){
                swap(arr[count], arr[i]);
                count++;
            }
        }
    }
};