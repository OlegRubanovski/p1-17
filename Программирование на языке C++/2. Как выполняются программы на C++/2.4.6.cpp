unsigned strlen(const char *str)
{
    int k = 0;
    while (*str++ != '\0')
        k++;
    return k;
}
