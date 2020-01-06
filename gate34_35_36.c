int a,b,c;

void fun1()
{
    static int a = 2;
    int b =1;
    a+=++b;
    printf("\nin fun1 a = %d and b = %d\n",a,b);
}
int fun3(int n)
{
    static int z = 10;
    z++;
    return (z+n);
}

int main()
{
    int p=10;
    printf("\n 1 fun3(p) = %d\n",fun3(p));
    printf("\n 2 fun3(p) = %d\n",fun3(p));
    static a = 1;
    a+=1;
    fun1();
    printf("\nin Main a = %d and b = %d\n",a,b);
}
