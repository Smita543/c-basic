#include<stdio.h>
int main()
{
   int a[9]={34,56,54,88,90,81,12,99,87},i;
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for ( i=8; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
