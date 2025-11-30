class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        unordered_set<int> st;
        for(int i = 0; i<nums1.size(); i++){
            mpp[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            if(mpp.find(nums2[i]) != mpp.end()) st.insert(nums2[i]);
        }
        for(auto it: st){
            ans.push_back(it);
        }
        return ans;
    }
};