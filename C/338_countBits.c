/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize) {
    int *res = (int *)malloc(sizeof(int) * (num + 1));
    int i;
    
    *returnSize = num + 1;
    res[0] = 0;
    
    for (i = 1; i <= num; i++) {
        res[i] = res[ i & (i - 1)] + 1;
    }
    
    return res;
}
