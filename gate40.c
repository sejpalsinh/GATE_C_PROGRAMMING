int Count = 0;
int cal(int a,int b)
{
    int c;
    Count++;
    if(b==3) return a*a*a;
    else
    {
        c = cal(a,b/3);
        return c*c*c;
    }
}
int main()
{
    cal(4,81);
    printf("\n\nCount = %d\n\n",Count);
}
