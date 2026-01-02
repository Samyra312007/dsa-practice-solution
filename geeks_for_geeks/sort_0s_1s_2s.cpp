class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0) zero++;
            else if(arr[i] == 1) one++;
            else if(arr[i] == 2) two++;
        }
        int j = 0;
        while(zero--){
            arr[j] = 0;
            j++;
        }
        while(one--){
            arr[j] = 1;
            j++;
        }
        while(two--){
            arr[j] = 2;
            j++;
        }
    }
};