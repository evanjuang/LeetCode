int titleToNumber(char* s) {
    int val = 0;
    int i;
    
    for (i = 0; i < strlen(s); i++) {
        val = val * 26 + s[i] - 64;
    }
    
    return val;
}
