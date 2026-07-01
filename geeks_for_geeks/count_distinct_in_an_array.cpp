int countDistinct(vector<int> &arr)
{
    int num;
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    num = mpp.size();
    return num;
}