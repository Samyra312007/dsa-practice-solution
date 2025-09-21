class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size();
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[candyType[i]]++;
        }
        int val = min((int)freq.size(), n / 2);
        return val;
    }
};