bool isPalindrome(int x) {
    int temp = x;
    int reverse = 0;
    
    if (x < 0)
        return false;

    if (x < 10)
        return true;
    
    while (temp) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    return x == reverse;
}
