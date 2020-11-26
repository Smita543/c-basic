#include<stdio.h>
int main()
{
    printf("Hello world");
    return 0;
}

// \\
#include<stdio.h>
void printstar(int n){
    for ( i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    printf("%c",'*');
}
int main()
{
    printstar(7);
    return 0;
}