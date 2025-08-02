

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int max = INT_MIN;
        
        for(int i = n-1; i>=0; i--){
            if(arr[i]>=max){
                max = arr[i];
                ans.push_back(max);
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};