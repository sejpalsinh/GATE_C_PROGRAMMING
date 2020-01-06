int main()
{
    char s[7] = "1234";
    char *p;
    p = s+2;
    *p = '0';
    printf("%s \n",s);
    printf("%s",p);
}
