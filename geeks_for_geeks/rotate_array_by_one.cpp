class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int elem = arr[n-1];
        arr.pop_back();
        arr.insert(arr.begin(), elem);
    }
};