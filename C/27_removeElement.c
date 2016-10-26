// similar: 283_moveZeroes
int removeElement(int* nums, int numsSize, int val) {
    int i;
    int len = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[len] = nums[i];
            len++;
        }
    }
    
    return len;
}
