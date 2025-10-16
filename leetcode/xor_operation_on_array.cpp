class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n, 0);
        for(int i = 0; i<n; i++){
            nums[i] = start + 2*i;
        }
        int xori = 0;
        for(int i = 0; i<n; i++){
            xori = xori^nums[i];
        }
        return xori;
    }
};