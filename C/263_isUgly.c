int maxDivide(int a, int b) {
    while (a%b == 0)
        a = a/b; 
    return a;
}

bool isUgly(int num) {
    if (num == 0) return 0;

    num = maxDivide(num, 2);
    num = maxDivide(num, 3);
    num = maxDivide(num, 5);
   
    return (num == 1) ? 1 : 0;
}
