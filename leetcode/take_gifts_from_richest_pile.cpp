class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        priority_queue<int> p;
        for (int i = 0; i < gifts.size(); i++)
        {
            p.push(gifts[i]);
        }
        long long reduce = 0;
        while (k)
        {
            long long num = p.top();
            p.pop();
            p.push(floor(sqrt(num)));
            k--;
        }
        while (!p.empty())
        {
            reduce += p.top();
            p.pop();
        }
        return reduce;
    }
};