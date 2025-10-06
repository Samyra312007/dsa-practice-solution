class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            int num = i;
            int j = 0;
            while(num != 0){
                if((num&1) == 1) j++;
                num = num>>1;
            }
            ans.push_back(j);
        }
        return ans;
    }
};