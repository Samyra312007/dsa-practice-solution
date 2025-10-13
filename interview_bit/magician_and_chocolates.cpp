int Solution::nchoc(int A, vector<int> &B)
{
    priority_queue<int> p;
    for (int i = 0; i < B.size(); i++)
    {
        p.push(B[i]);
    }

    long long maxc = 0;
    while (A && (!p.empty()))
    {
        maxc += p.top();
        if (p.top() / 2)
        {
            p.push(p.top() / 2);
        }
        p.pop();
        A--;
    }
    return maxc % 1000000007;
}
