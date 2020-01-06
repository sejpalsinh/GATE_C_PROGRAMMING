int main()
{
    int i=10,j=20,*p,*q;
    p = &i, q = &j;
    *q = 30;
    p = q;
    *p = 50;
    *q = *p + *q;
    q = p;
    *q = *p + *q;
    printf("i = %d and j = %d",i,j);
    return 0;
}
