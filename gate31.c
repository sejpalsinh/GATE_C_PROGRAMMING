int main()
{
    int c,*b,**a,y,z;
    c = 8;
    b = &c;
    a = &b;
    **a = 4;
    z = **a;
    *b+= 5;
    y = *b;
    c+= 9;
    printf("\n\nc = %d | y = %d | z = %d\n\n\n",c,y,z);
}
