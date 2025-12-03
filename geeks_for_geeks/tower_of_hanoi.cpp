class Solution
{
public:
    int solve(int &steps, int n, int from, int to, int aux)
    {
        if (n == 0)
            return steps;
        int one = solve(steps, n - 1, from, aux, to);
        steps++;
        int two = solve(steps, n - 1, aux, to, from);
        return steps;
    }
    int towerOfHanoi(int n, int from, int to, int aux)
    {
        int steps = 0;
        int val = solve(steps, n, from, to, aux);
        return val;
    }
};