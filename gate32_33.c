void Swap(int *ptr1,int *ptr2)
{
    int *temp;
    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}
void OSwap(int *ptr1,int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void chfun1(char *s1,char *s2)
{
    char *temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}
void chfun2(char **s1,char **s2)
{
    char *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main()
{
    int v1=10,v2=20;
    printf("\n\nBefore Swap v1 = %d and v2 = %d",v1,v2);
    Swap(&v1,&v2);
    printf("\n\nAfter Swap v1 = %d and v2 = %d\n\n",v1,v2);
    printf("\n\nBefore OSwap v1 = %d and v2 = %d",v1,v2);
    OSwap(&v1,&v2);
    printf("\n\nAfter OSwap v1 = %d and v2 = %d\n\n",v1,v2);
    char *str1="hyy",*str2="Byyy";
    printf("\n\nBefore chfun1 str1 = %s and str2 = %s",str1,str2);
    chfun1(str1,str2);
    printf("\n\nAfter chfun1 str1 = %s and str2 = %s\n\n",str1,str2);
    printf("\n\nBefore chfun2 str1 = %s and str2 = %s",str1,str2);
    chfun2(&str1,&str2);
    printf("\n\nAfter chfun2 str1 = %s and str2 = %s\n\n",str1,str2);

}
