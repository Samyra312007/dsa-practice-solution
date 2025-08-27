class Solution
{
public:
    string minWindow(string s, string t)
    {
        int l = 0;
        int r = 0;
        int minlen = INT_MAX;
        int sidx = -1;
        int cnt = 0;
        vector<int> hash(256, 0);
        for (char c : t)
            hash[c]++;
        while (r < s.length())
        {
            hash[s[r]]--;
            if (hash[s[r]] >= 0)
            {
                cnt = cnt + 1;
            }
            while (cnt == t.length())
            {
                if (r - l + 1 < minlen)
                {
                    minlen = r - l + 1;
                    sidx = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0)
                    cnt = cnt - 1;
                l++;
            }
            r = r + 1;
        }
        return sidx == -1 ? "" : s.substr(sidx, minlen);
    }
};