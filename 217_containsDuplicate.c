int cmp(const void *arg1, const void *arg2) {
    return (*(int *)arg1 - *(int *)arg2);
}

bool containsDuplicate(int* nums, int numsSize) {
    int i;

    if (numsSize < 2)
        return false;

    qsort((void *)nums, numsSize, sizeof(int), cmp);

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == nums[i + 1])
            return true;
    }

    return false;
}
