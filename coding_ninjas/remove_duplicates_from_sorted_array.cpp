int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}