void rotate(int* nums, int numsSize, int k) {
    int result[numsSize];

    k = k % numsSize;

    for(int i = 0; i < numsSize; i++)
    {
        int newIndex = (i + k) % numsSize;
        result[newIndex] = nums[i];
    }

    for(int i = 0; i < numsSize; i++)
    {
        nums[i] = result[i];
    }
}


