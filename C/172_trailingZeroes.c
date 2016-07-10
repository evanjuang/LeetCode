/*
 * tail zeros: number of 10 (2x5)
 */

int trailingZeroes(int n) {
    int count = 0;
    
    while(n) {
        n = n / 5;
        count += n;
    }
    
    return count;
}
