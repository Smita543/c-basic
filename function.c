//  1-- < With argument and with return type >
// #include<stdio.h>
// int sum( int a, int b );
// int main()
// {
//     int a,b,c;
//     a = 10;
//     b = 15;
//     c = sum(a,b);
//     printf( "The sum is %d\n",c );
//     return 0;
// }
// int sum( int a, int b )
// {
//     return a+b ;
//}

// < With argument and without retun value > //

#include<stdio.h>
int sum( int a, int b );
void printstar(int n)
{
    for ( i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    printf("%c",'*');
}
int main()
{
    int a,b,c;
    a = 10;
    b = 15;
    c = sum(a,b);
    printstar(7);
    // printf( "The sum is %d\n",c );
    return 0;
}
int sum( int a, int b )
{
    return a+b ;
}