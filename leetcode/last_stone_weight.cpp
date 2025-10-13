class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        if (stones.size() == 1)
            return stones[0];
        priority_queue<int> p;
        for (int i = 0; i < stones.size(); i++)
        {
            p.push(stones[i]);
        }
        while (p.size() > 1)
        {
            int y = p.top();
            p.pop();
            y -= p.top();
            p.pop();
            if (y)
            {
                p.push(y);
            }
        }
        return p.empty() ? 0 : p.top();
    }
};