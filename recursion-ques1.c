void count(int n)
{
    static int d = 1;
    printf("%d",n);
    printf("%d", d);
    d++;
    if(n>1) count(n-1);
    printf("%d\n",d);
}
int main()
{
    count(3);
}