int addDigits(int num) {
    int temp;
    
    while (num >= 10) {
        temp = 0;
        while (num > 0) {
            temp += num % 10;
            num = num / 10;
        }
        
        num = temp;
    }
    
    return num;
}

// digit root
int addDigits_2(int num) {
    if (num == 0)
        return 0;
        
    return (num - 1) % 9 + 1;
}
