// Naive Approach

class Solution
{
public:
    void setMatrixZeroes(vector<vector<int>> &mat)
    {
        int m = mat[0].size();
        int n = mat.size();
        vector<bool> rows(n, false);
        vector<bool> cols(m, false);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (rows[i] == true || cols[j] == true)
                {
                    mat[i][j] = 0;
                }
            }
        }
    }
};


//Better approach

class Solution
{
public:
    void setMatrixZeroes(vector<vector<int>> &mat)
    {
        int m = mat[0].size();
        int n = mat.size();
        int c0 = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    mat[i][0] = 0;
                    if (j == 0)
                    {
                        c0 = 0;
                    }
                    else
                    {
                        mat[0][j] = 0;
                    }
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (mat[i][0] == 0 || mat[0][j] == 0)
                {
                    mat[i][j] = 0;
                }
            }
        }

        if (mat[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                mat[0][j] = 0;
            }
        }
        if (c0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                mat[i][0] = 0;
            }
        }
    }
};