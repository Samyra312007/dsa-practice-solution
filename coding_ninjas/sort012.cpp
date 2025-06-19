#include <bits/stdc++.h>

void sort012(int *arr, int n)
{
    int left = 0;
    int right = n - 1;
    int ptr = 0;
    while (ptr <= right)
    {
        if (arr[ptr] == 0)
        {
            swap(arr[ptr], arr[left]);
            ptr++;
            left++;
        }
        else if (arr[ptr] == 2)
        {
            swap(arr[ptr], arr[right]);
            right--;
        }
        else
        {
            ptr++;
        }
    }
}