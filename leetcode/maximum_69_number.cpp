class Solution
{
public:
    int maximum69Number(int num)
    {
        vector<string> perm;
        string nums = to_string(num);
        if (nums == "9" || nums == "99" || nums == "999" || nums == "9999")
            return num;
        for (int i = 0; i < nums.length(); i++)
        {
            string n = nums;
            if (nums[i] == '9')
            {
                n[i] = '6';
                perm.push_back(n);
            }
            else if (nums[i] == '6')
            {
                n[i] = '9';
                perm.push_back(n);
            }
        }
        int maxm = INT_MIN;
        for (int i = 0; i < perm.size(); i++)
        {
            int res = stoi(perm[i]);
            maxm = max(maxm, res);
        }
        return maxm;
    }
};