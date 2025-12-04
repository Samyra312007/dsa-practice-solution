class Solution
{
public:
    int countCollisions(string directions)
    {
        int n = directions.length();
        int cnt = 0;
        int i = 0;
        int j = directions.length() - 1;
        while (i < n && directions[i] == 'L')
            i++;
        while (j >= 0 && directions[j] == 'R')
            j--;
        while (i <= j)
        {
            if (directions[i] != 'S')
            {
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};