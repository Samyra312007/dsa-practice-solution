class Solution
{
public:
    int maxFreqSum(string s)
    {
        int n = s.length();
        unordered_map<char, int> vowel;
        unordered_map<char, int> cons;
        int maxv = 0;
        int maxc = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowel[s[i]]++;
            }
            else
            {
                cons[s[i]]++;
            }
        }
        for (auto &ch : vowel)
        {
            maxv = max(maxv, ch.second);
        }
        for (auto &ch : cons)
        {
            maxc = max(maxc, ch.second);
        }
        return maxv + maxc;
    }
};