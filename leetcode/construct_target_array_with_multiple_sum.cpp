class Solution
{
public:
    bool isPossible(vector<int> &target)
    {
        priority_queue<int> p;
        long long sum = 0;
        for (int i = 0; i < target.size(); i++)
        {
            p.push(target[i]);
            sum += target[i];
        }
        int MaxElem, Elem, RemSum;
        while (p.top() != 1)
        {
            MaxElem = p.top();
            p.pop();
            RemSum = sum - MaxElem;
            if (RemSum <= 0 || RemSum >= MaxElem)
            {
                return 0;
            }
            Elem = MaxElem % RemSum;
            if (Elem == 0)
            {
                if (RemSum != 1)
                {
                    return 0;
                }
                else
                    return 1;
            }
            sum = RemSum + Elem;
            p.push(Elem);
        }
        return 1;
    }
};