char* convertToTitle(int n) {
    int size = 0;
    int tmp = n;
    
    while(tmp) {
        tmp = (tmp - 1) / 26; 
        size++;
    }
    
    char* ans = (char *)calloc(size, sizeof(char));
    
    while(n){
        ans[--size] = (char)((n - 1) % 26 + 'A');
        n = (n - 1) / 26;
    }
    return ans;
}
