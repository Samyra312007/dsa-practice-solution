class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int elem = 1;
        int i = 0;
        int j = n-1;
        while(i<j){
            ans[i] = elem;
            ans[j] = -elem;
            elem++;
            i++;
            j--;
        }
        return ans;
    }
};