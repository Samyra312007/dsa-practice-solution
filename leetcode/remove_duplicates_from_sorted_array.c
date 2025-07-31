int removeDuplicates(int *nums, int numsSize)
{
    int i = 1;
    int j = 0;
    while (i < numsSize)
    {
        if (nums[i] == nums[j])
        {
            i++;
        }
        else
        {
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}