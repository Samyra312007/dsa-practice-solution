class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        for (int i = 0; i < t.length(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> mpp;
        for (char c : t)
        {
            mpp[c]++;
        }
        for (char c : s)
        {
            if (mpp.find(c) == mpp.end() || mpp[c] == 0)
            {
                return false;
            }
            mpp[c]--;
        }
        return true;
    }
};
