class Solution
{
public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string &s)
    {
        // code here
        int start = 0;
        int end = s.size() - 1;
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};