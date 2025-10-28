class Solution
{
public:
    vector<int> numberGame(vector<int> &nums)
    {
        priority_queue<int, vector<int>, greater<int>> p;
        for (auto num : nums)
        {
            p.push(num);
        }
        vector<int> ans;
        while (p.size() != 0)
        {
            int one = p.top();
            p.pop();
            int two = p.top();
            p.pop();
            ans.push_back(two);
            ans.push_back(one);
        }
        return ans;
    }
};