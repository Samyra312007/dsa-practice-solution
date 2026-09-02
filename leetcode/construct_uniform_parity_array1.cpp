class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        bool res = false;
        int even = 0;
        int odd = 0;
        for(int i = 0; i<n; i++){
            if(nums1[i]%2 == 0) even++;
            else odd++;
        }
        if(even%2 == 0 || odd%2 == 0 || odd == even || odd != even) res = true;
        else res = false;
        return res;
    }
};