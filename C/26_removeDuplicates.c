int removeDuplicates(int* nums, int numsSize) {
    int new = 0;
    int i;

    if (numsSize <= 0) return 0;

    for (i = 1; i < numsSize; i++) {
        if (nums[new] != nums[i]) {
            nums[++new] = nums[i]; 
        }
    }
     return new + 1;
}
