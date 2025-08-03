class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int maxprod = 0;
        int ltr = 1;
        int rtl = 1;
        for (int i = 0; i < n; i++)
        {
            if (ltr == 0)
                ltr = 1;
            if (rtl == 0)
                rtl = 1;
            ltr *= nums[i];
            int j = n - i - 1;
            rtl *= nums[j];
            maxprod = max({maxprod, ltr, rtl});
        }
        return maxprod;
    }
};