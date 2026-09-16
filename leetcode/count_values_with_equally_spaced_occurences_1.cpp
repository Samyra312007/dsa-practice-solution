class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int, pair<int, vector<int>>> mpp;
        for(int i = 0; i<n; i++){
            mpp[nums[i]].first++;
            mpp[nums[i]].second.push_back(i);
        }
        for(auto it: mpp){
            if(it.second.first == 3 && (it.second.second[1] - it.second.second[0] == it.second.second[2] - it.second.second[1])) count++;
        }
        return count;
    }
};