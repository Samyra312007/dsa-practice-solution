class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        int ans = 0;
        sort(capacity.begin(), capacity.end());
        int total = 0;
        for (int i = 0; i < apple.size(); i++)
        {
            total += apple[i];
        }
        int carry = 0;
        for (int i = capacity.size() - 1; i >= 0; i--)
        {
            carry += capacity[i];
            ans++;
            if (carry >= total)
            {
                break;
            }
        }
        return ans;
    }
};