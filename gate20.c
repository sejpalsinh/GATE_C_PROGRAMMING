int main()
{
    int g[4]={7,9,10,5};
    int *p = g;
    printf("%d",++*p);
    printf("%d",*p++);
    printf("%d",*p);
    return 0;
}
