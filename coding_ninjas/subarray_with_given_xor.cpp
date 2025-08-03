int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    map<int, int> mpp;
    int count = 0;
    int xr = 0;
    mpp[xr]++;
    for (int i = 0; i < n; i++)
    {
        xr ^= A[i];
        int xi = xr ^ B;
        count += mpp[xi];
        mpp[xr]++;
    }
    return count;
}