class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int cnt = 0;
        unsigned int res = start ^ goal;
        for (int i = 0; i < 31; i++)
        {
            if (res & (1 << i))
            {
                cnt++;
            }
        }
        return cnt;
    }
};