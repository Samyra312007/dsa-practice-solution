class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int mod = 1e9 + 7;
        unordered_map<int, int> lmap;
        unordered_map<int, int> rmap;
        for(auto num: nums) rmap[num]++;
        rmap[nums[0]]--;
        lmap[nums[0]]++;
        for(int j = 1; j<n-1; j++){
            rmap[nums[j]]--;
            if(lmap.count(nums[j]*2) && rmap.count(nums[j]*2)){
                cnt = (cnt+(1LL*lmap[nums[j]*2]*rmap[nums[j]*2])%mod)%mod;
            }
            lmap[nums[j]]++;
        }
        return cnt;
    }
};