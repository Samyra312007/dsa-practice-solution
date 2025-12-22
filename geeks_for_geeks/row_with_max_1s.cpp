// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int ans = -1;
        int prevcount = 0;
        for(int i = 0; i<arr.size(); i++){
            int count = 0;
            for(int j = 0; j<arr[0].size(); j++){
                if(arr[i][j] == 1) count++;
            }
            if(count > prevcount){
                ans = i;
                prevcount = count;
            }
        }
        return ans;
    }
};