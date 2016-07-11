// n & (n - 1) drops the lowest set bit
int hammingWeight(uint32_t n) {
    int count = 0;

    while(n) {
        n = n & (n - 1);
        count++;
    }

    return count;
}
