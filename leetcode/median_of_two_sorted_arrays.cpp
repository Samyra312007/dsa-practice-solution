class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int mergelen = m + n;
        double median = 0;
        vector<int> merged(mergelen);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        if ((mergelen - 1) % 2 == 0)
        {
            median = merged[(mergelen - 1) / 2];
        }
        else
        {
            median = (merged[(mergelen - 1) / 2] + merged[((mergelen - 1) / 2) + 1]) / 2.0;
        }
        return median;
    }
};