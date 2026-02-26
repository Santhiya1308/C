int findMiddleIndex(int* nums, int numsSize) {
    int ts=0;
    int ls=0;
    for(int i=0;i<numsSize;i++){
    ts+=nums[i];}
    for(int i=0;i<numsSize;i++){
        int rs=ts-ls-nums[i];
        if(ls==rs)
        {
            return i;
        }
        ls+=nums[i];
    }
    return-1;
}