#include<stdio.h>
int main()
{

    int arr[] ={1,2,3,77,88};
    int* arrayptr = arr ;
    printf("%d\n",arr[0]);
    printf("The address of first positin of aaray is %d\n", &arr[0]);
    printf("The address of first positin of aaray is %d\n", arr);
    printf("%d\n", arr[1]);
    printf("The address of second positin of aaray is %d\n", arr[0]+1);   
    printf("The address of second positin of aaray is %d\n", &arr[1]);
    printf("The address of second positin of aaray is %d\n", &arr[0]+1);
    printf("The address of second positin of aaray is %d\n", arr+1);

    printf("The value of address of second positin of aaray is %d\n", *(&arr[1])) ;
    printf("The value of address of second positin of aaray is %d\n", *(&arr[0]+1));
    printf("The value of address of second positin of aaray is %d\n", *(arr+1));
 }
