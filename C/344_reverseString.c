char* reverseString(char* s) {
    int len = strlen(s);
    char temp;
    int i = 0, j = len - 1;

    while(i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    return s;
}
