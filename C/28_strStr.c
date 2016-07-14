// brute-force 
int strStr(char* haystack, char* needle) {
    int h_len = strlen(haystack);
    int n_len = strlen(needle);
    int i, j;
    
    if (n_len == 0)
        return 0;

    for (i = 0; i < h_len - n_len + 1; i++) {
        for (j = 0; j < n_len; j++) {
            if (haystack[i + j] != needle[j])
                break;
            
            if (j == n_len - 1)
                return i;
        }
    }
    
    return -1;
}
