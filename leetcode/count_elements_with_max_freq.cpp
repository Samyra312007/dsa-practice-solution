class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i = 0; i<n; i++){
            freq[nums[i]]++;
        }
        int maxi = 0;
        int maxicnt = 0;
        for(auto& it: freq){
            maxi = max(maxi, it.second);
        }
        for(auto& it: freq){
            if(maxi == it.second) maxicnt++;
        }
        return maxicnt*maxi;
    }
};