int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    int i;
    
    for (i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    
    return numsSize * (numsSize + 1)/2 - sum;
}
