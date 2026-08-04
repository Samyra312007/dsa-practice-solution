class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        vector<int> numbers(101, 0);
        int n = nums.size();
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i = 0; i<n; i++){
            smallest = min(smallest, nums[i]);
            largest = max(largest, nums[i]);
            numbers[nums[i]] = 1;
        }
        numbers[smallest] = 1;
        numbers[largest] = 1;
        for(int i = smallest; i<largest; i++){
            if(numbers[i] == 0) res.push_back(i);
        }
        return res;
    }
};