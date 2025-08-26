class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        int n = dimensions.size();
        int maxd = 0;
        int maxArea = 0;
        for (int i = 0; i < n; i++)
        {
            int rec1 = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
            int area1 = dimensions[i][0] * dimensions[i][1];
            if (rec1 >= maxd)
            {
                if (rec1 == maxd)
                {
                    maxArea = max(maxArea, area1);
                }
                else
                {
                    maxd = max(rec1, maxd);
                    maxArea = area1;
                }
            }
        }
        return maxArea;
    }
};