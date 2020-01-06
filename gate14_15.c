int main()
{
    int i,j;
    for(i=0,j=0; i<10,j<20; i++,j++)
    {
        printf("\ni : %d , j : %d",i,j);
    }

    printf("\n\n loop 2 \n\n");

    for(i=0,j=0; i<20,j<10; i++,j++)
    {
        printf("\ni : %d , j : %d",i,j);
    }
    printf("\n\n loop 3 \n\n");
    i=0;

    for(printf("%d",++i);printf("%d",++i);i++)
    {
        printf("%d",++i);
        if(i>6)
            break;
    }

}
