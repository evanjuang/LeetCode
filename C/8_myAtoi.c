int myAtoi(char* str) {
    int val = 0;
    int sign = 1;
    int old_val = 0;
    
    while(isspace(*str))
        *str++;
    
    if (*str == '-' || *str == '+') {
        if (*str == '-') sign = -1;
        *str++;
    }
    
    while(isdigit(*str)) {
        old_val = val;
        val = val * 10 + *str - '0';
        if(val / 10 != old_val) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        
        *str++;
    }
    
    return sign * val;
}
