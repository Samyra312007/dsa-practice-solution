class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        int posIdx = 0;
        int negIdx = 0;
        int i = 0;
        while (posIdx < pos.size() && negIdx < neg.size())
        {
            if (i % 2 == 0)
            {
                nums[i++] = pos[posIdx++];
            }
            else
            {
                nums[i++] = neg[negIdx++];
            }
        }
        while (posIdx < pos.size())
        {
            nums[i++] = pos[posIdx++];
        }
        while (negIdx < neg.size())
        {
            nums[i++] = neg[negIdx++];
        }
        return nums;
    }
};