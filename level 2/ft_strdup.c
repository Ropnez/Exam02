char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;

    while (src[len])
        len++;
    char *src2 = (char *)molloc(sizeof(char) * len + 1);
    if(!src2)
        return 0;
    while (src[i])
    {
        src2[i] = src[i]; 
        i++;
    }
    src2[i] = '\0';
    return src2;
}