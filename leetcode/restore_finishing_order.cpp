class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(auto num : friends){
            mpp[num]++;
        }
        for(int i = 0; i<order.size(); i++){
            if(mpp.find(order[i]) != mpp.end()){
                ans.push_back(order[i]);
                mpp[order[i]]--;
            }
        }
        return ans;
    }
};