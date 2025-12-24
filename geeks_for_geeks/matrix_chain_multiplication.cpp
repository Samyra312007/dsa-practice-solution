class Solution {
  public:
    int solve(vector<int>& arr, int i, int j, vector<vector<int>>& t){
        if(i>=j) return 0;
        int mini = INT_MAX;
        if(t[i][j] != -1) return t[i][j];
        for(int k = i; k<j; k++){
            int temp = solve(arr, i, k, t)+solve(arr, k+1, j, t)+(arr[i-1]*arr[k]*arr[j]);
            if(temp < mini) mini = temp;
        }
        return t[i][j] = mini;
    }
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> t(n+1, vector<int> (n+1, -1));
        return solve(arr, 1, n-1, t);
    }
};