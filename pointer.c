#include<stdio.h>
int main()
{
    printf("Lets learn about pointers\n");
    int a = 55;
    int* ptra = &a;
    int* ptr1 = NULL ;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptra);
    printf("The addresss of a is %d\n",ptra);
    printf("The addresss of some garbage value is %d\n",ptr1);
    printf("The addresss of a is %d\n",&a);
    printf("The addresss of pointer to a is %d\n",&ptra);

    return 0;
}