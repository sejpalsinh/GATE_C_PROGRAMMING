#include<stdio.h>
void foo(char *a)
{
    if(*a && *a!=' ')
    {
        foo(a+1);
        putchar(*a);
    }
}
void revString(char *a)
{
    if(*a)
    {
        revString(a+1);
        putchar(*a);
    }
}
int main()
{

    char *s = "sejpalsinh jadeja";
    foo(s);
    printf("\n\n");
    revString(s);
}
