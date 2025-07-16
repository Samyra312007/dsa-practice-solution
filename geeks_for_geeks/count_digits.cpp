class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        int temp = n;
        int count = 0;
        while (temp != 0)
        {
            int r = temp % 10;
            temp = temp / 10;
            if (r > 0 && n % r == 0)
            {
                count++;
            }
        }
        return count;
    }
};