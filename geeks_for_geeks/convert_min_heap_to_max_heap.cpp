// User function Template for C++

class Solution
{
public:
    void heapify(vector<int> &arr, int i, int n)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;

        if (l < n && arr[l] > arr[largest])
        {
            largest = l;
        }
        if (r < n && arr[r] > arr[largest])
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            heapify(arr, largest, n);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int N)
    {
        for (int i = (N - 2) / 2; i >= 0; --i)
        {
            heapify(arr, i, N);
        }
    }
};