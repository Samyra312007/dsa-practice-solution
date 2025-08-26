class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.length();
        int maxi = -1;
        int i = 0;
        int j = 0;
        int cnt = 0;
        vector<int> freq(26, 0);

        while (j < n)
        {
            freq[s[j] - 'a']++;
            if (freq[s[j] - 'a'] == 1)
                cnt++;
            while (cnt > k)
            {
                freq[s[i] - 'a']--;
                if (freq[s[i] - 'a'] == 0)
                    cnt--;
                i++;
            }
            if (cnt == k)
            {
                maxi = max(maxi, j - i + 1);
            }
            j++;
        }
        return maxi;
    }
};