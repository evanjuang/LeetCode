int lengthOfLastWord(char* s) {
    int idx = strlen(s) - 1;
    int count = 0;
    
    while(isspace(s[idx]) && idx >= 0) 
        idx--;
    
    while (!isspace(s[idx]) && idx >=0) {
        count++;
        idx--;
    }
    
    return count;
}
