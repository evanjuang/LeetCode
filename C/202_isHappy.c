// If a number is NOT happy, there is always a 4 in the cycle.
bool isHappy(int n) {
    if (n <= 0)
        return false;
    
    int magic = 4;
    int t = 0;
    
    while (1) {
        if (n == 1) 
            return true;
        
        if (n == magic) 
            return false;

        while (n) {
            t += (n % 10) * (n % 10);
            n /= 10;
        }
        n = t;
    }
}
