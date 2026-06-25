class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int ans = -1;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(x == arr[i]){
                ans = i;
                break;
            }
        }
        return ans;
    }
};