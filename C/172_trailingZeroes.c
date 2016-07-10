/*
 * tail zeros: number of 10 (2x5)
 */

int trailingZeroes(int n) {
    int count = 0;
    int temp = 0;
    
    while(n) {
        temp = n / 5;
        count += temp;
        n = temp;
    }
    
    return count;
}
