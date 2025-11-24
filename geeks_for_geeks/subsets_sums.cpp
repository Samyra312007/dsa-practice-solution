class Solution
{
public:
    void helper(vector<int> &ans, int ind, int summ, vector<int> &arr)
    {
        if (ind == arr.size())
        {
            ans.push_back(summ);
            return;
        }
        summ += arr[ind];
        helper(ans, ind + 1, summ, arr);
        summ -= arr[ind];
        helper(ans, ind + 1, summ, arr);
    }
    vector<int> subsetSums(vector<int> &arr)
    {
        vector<int> ans;
        helper(ans, 0, 0, arr);
        return ans;
    }
};