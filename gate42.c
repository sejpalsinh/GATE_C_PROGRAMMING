int foo(int val) //ab
{
    int x = 0;
    while(val)
    {
        x = x + foo(val--);
    }
    return val;
}
int foo1(int val) //in
{
    int x = 0;
    while(val)
    {
        x = x + foo1(val-1);
    }
    return val;
}
int main()
{
    printf("%d",foo(5));
    printf("%d",foo1(5));
}
