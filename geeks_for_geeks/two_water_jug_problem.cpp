class Solution
{
public:
    int pour(int fromcap, int tocap, int d)
    {
        int from = fromcap;
        int to = 0;
        int step = 1;
        while (from != d && to != d)
        {
            int temp = min(from, tocap - to);
            to += temp;
            from -= temp;
            step++;
            if (from == d || to == d)
                break;
            if (from == 0)
            {
                from = fromcap;
                step++;
            }
            if (to == tocap)
            {
                to = 0;
                step++;
            }
        }
        return step;
    }
    int minSteps(int m, int n, int d)
    {
        if (d > max(m, n))
            return -1;
        if (d % gcd(m, n) != 0)
            return -1;

        int ans1 = pour(m, n, d);
        int ans2 = pour(n, m, d);
        return min(ans1, ans2);
    }
};