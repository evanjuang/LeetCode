/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    *returnSize = digitsSize;

    while(i >= 0) {
        if (digits[i] == 9) {
            digits[i--] = 0;
        } else {
            digits[i]++;
            return digits;
        }
    }

    (*returnSize)++;
    int *ret = (int *)malloc((*returnSize) * sizeof(int));
    
    ret[0] = 1;
    for(int j = 1; j < *returnSize; j++) {
        ret[j] = digits[j - 1];
    }

    return ret;
}
