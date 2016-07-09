int isVowel(char c) {
    return
    c == 'a' || c == 'A' ||
    c == 'e' || c == 'E' ||
    c == 'i' || c == 'I' ||
    c == 'o' || c == 'O' ||
    c == 'u' || c == 'U';
}

void charSwap(char* a, char* b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

char* reverseVowels(char* s) {
    int l = 0;
    int r = strlen(s) - 1;
    
    while (l < r) {
        if (isVowel(s[l]) && isVowel(s[r])) {
            charSwap(&s[l], &s[r]);
            l++;
            r--;
        }
        
        if (!isVowel(s[l])) l++;
        if (!isVowel(s[r])) r--;
    }

    return s;
}
