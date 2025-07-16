class Solution
{
public:
    int largest(vector<int> &arr)
    {
        // code here
        int large = INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > large)
            {
                large = arr[i];
            }
        }
        return large;
    }
};
