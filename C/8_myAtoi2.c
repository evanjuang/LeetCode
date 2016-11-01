int StrToInt(const char* str)
{
    static const int MAX_INT = (int)((unsigned)~0 >> 1);
    static const int MIN_INT = -(int)((unsigned)~0 >> 1) - 1;
    unsigned int n = 0;

    //判斷是否輸入為空
    if (str == 0)
    {
        return 0;
    }

    //處理空格
    while (isspace(*str))
        ++str;

    //處理正負
    int sign = 1;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        ++str;
    }

    //確定是數字後才執行循環
    while (isdigit(*str))
    {
        //處理溢出
        int c = *str - '0';
        if (sign > 0 && (n > MAX_INT / 10 || (n == MAX_INT / 10 && c > MAX_INT % 10)))
        {
            n = MAX_INT;
            break;
        }
        else if (sign < 0 && (n >(unsigned)MIN_INT / 10 || (n == (unsigned)MIN_INT / 10 && c > (unsigned)MIN_INT % 10)))
        {
            n = MIN_INT;
            break;
        }

        //把之前得到的數字乘以10，再加上當前字符表示的數字。
        n = n * 10 + c;
        ++str;
    }
    return sign > 0 ? n : -n;
}
