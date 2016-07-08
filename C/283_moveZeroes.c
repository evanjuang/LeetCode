void moveZeroes(int* nums, int numsSize) {
    int nonzero = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[nonzero] = nums[i];
            nonzero++;
        }
    }

    for (;nonzero < numsSize; nonzero++) {
        nums[nonzero] = 0;
    }
}
