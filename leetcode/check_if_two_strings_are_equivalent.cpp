class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int n1 = word1.size();
        int n2 = word2.size();
        string res1 = "";
        string res2 = "";
        for (int i = 0; i < n1; i++)
        {
            res1 += word1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            res2 += word2[i];
        }
        return res1 == res2;
    }
};