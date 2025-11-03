class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int res = 0;
        unordered_map<char, int> mpp;
        for (auto jewel : jewels)
            mpp[jewel]++;
        for (int i = 0; i < stones.length(); i++)
        {
            if (mpp.find(stones[i]) != mpp.end())
                res++;
        }
        return res;
    }
};