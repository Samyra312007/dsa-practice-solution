class Solution
{
public:
    int scoreOfString(string s)
    {
        int summ = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            summ += abs(s[i] - s[i + 1]);
        }
        return summ;
    }
};