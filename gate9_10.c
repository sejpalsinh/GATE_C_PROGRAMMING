int main()
{
    int i=-1,j=-1,k=-1,l=-1,m;
    m = ((i++ && j++ && k++)|| l++);
    printf("i : %d  j : %d  k : %d  l : %d  m : %d ",i,j,k,l,m);
    i=0,j=-1,k=-1,l=-1;
    m = ((i++ && j++ && k++)|| l++);
    printf("\ni : %d  j : %d  k : %d  l : %d  m : %d ",i,j,k,l,m);
}
