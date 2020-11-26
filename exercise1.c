#include<stdio.h>
int main()
{
    int i,c,n;
    printf("enter the number");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        c = (n * i) ;
        printf("%d\n",c);

    }
    return 0;
}