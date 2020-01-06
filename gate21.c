int main()
{
    char p[10] = "GATE2021";
    char *q;
    q=p;
    q[3] = 'I';
    printf("%s\n",p);
    printf("%s",p+3);
}
