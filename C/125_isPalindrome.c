bool isPalindrome(char* s) {
    int r = strlen(s) - 1;
    int l = 0;
    int i;
    
    while (l < r) {
        if (!isalnum(s[l])) { 
            l++;
            continue;
        }
       
        if (!isalnum(s[r])) { 
            r--;
            continue;
        }
        
        if (tolower(s[l++]) != tolower(s[r--])) {
            return false;
        }
    }
    
    return true;
}
