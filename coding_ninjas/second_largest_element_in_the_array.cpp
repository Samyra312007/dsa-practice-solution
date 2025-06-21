#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest == INT_MIN ? -1 : slargest;
}