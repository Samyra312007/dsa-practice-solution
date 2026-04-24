class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int n = moves.length();
        int distance = 0;
        int underscore = 0;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == 'L')
                distance -= 1;
            else if (moves[i] == 'R')
                distance += 1;
            else
                underscore++;
        }
        distance = max(abs(distance - underscore), abs(distance + underscore));
        return distance;
    }
};