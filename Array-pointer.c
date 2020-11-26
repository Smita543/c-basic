#include<stdio.h>
int main()
{
    char a = '34';
    char* ptra = &a ;
    printf("%d\n", ptra);
    printf("%d\n", ptra+1);
    //\\// these four below lines are again cmmented;; //\\//\\//\\ 
        // printf("%d\n", &a);
        // printf("%d\n", *ptra);
        // printf("%d\n",a);
        // printf("%d\n",&ptra);
    return 0;
}

