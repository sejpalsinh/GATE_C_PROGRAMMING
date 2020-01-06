int main()
{
    int i,j,k=0;
    j = 2*3/4+2.0/6+8/5;
    printf("j = %d \n",j);
    k-=--j;
    for(i=0;i<5;i++)
    {
        switch(i+k)
        {
        case 1:
        case 2:
            printf("%d \t",i+k);
        case 3:
            printf("%d \t",i+k);
        default:
            printf("%d \t",i+k);
        }
    }

}
