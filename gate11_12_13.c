int main()
{
    int i=10,j=20,k=30;
    printf("%d",i<j<k);
    printf("\n%d",i>j>k);
    printf("\n%d",i<j>k);
    i=20,j=30,k=10;
    printf("\n%d",i<j<k);
    printf("\n%d",i>j>k);
    printf("\n%d",i<j>k);
    i=30,j=10,k=20;
    printf("\n%d",i<j<k);
    printf("\n%d",i>j>k);
    printf("\n%d",i<j>k);
    unsigned int u=10;
    if(u>-1) // (-1) will be converted to unsigned using 2's compliment so 00000000...01 11111111...10+1 = 1111111...11 means max of int
    {
        printf("\nif");
    }
    else
    {
        printf("\nelse");
    }
}
