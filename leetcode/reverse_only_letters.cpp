class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (!(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z'))
                i++;
            else if (!(tolower(s[j]) >= 'a' && tolower(s[j]) <= 'z'))
                j--;
            else
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};