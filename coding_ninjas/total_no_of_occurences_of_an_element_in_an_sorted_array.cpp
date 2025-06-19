#include <bits/stdc++.h>
using namespace std;

int firstoccur(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        if (arr[mid] > k)
        {
            high = mid - 1;
        }
        if (arr[mid] < k)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int lastoccur(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        if (arr[mid] > k)
        {
            high = mid - 1;
        }
        if (arr[mid] < k)
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int k;
    cin >> k;
    int first = firstoccur(arr, 8, k);
    int last = lastoccur(arr, 8, k);
    int total = last-first+1;

    cout << "Total no. of occurences of the element: " << total << endl;
}