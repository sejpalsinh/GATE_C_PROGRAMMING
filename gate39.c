
int x,y;

void a(int *z)
{
    int x;
    x=1;
    b();
    *z=x;
}
void b()
{
    x = x+1;
}

void main()
{
    x=5;
    a(&y);
    printf("%d",y);
}
