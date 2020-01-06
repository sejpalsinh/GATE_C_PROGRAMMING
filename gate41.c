int foo(int *x,int c)
{
    c = c-1;
    if(c==0)return 1;
    *x=*x+1;
    return (foo(x,c)*(*x));
}
int main()
{
    int p=5;
    printf("%d",foo(&p,p));
}
