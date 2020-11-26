#include<stdio.h>
int main()
{
    int marks[2][4] ={{45,20,16,65},
                      {10,40,23,15}};


    for (int i = 0; i < 2; i++)
    {
        for (int j =0 ; j<4 ; j++ )
        {
           printf("%d ",marks[i][j]); 
        }
        printf("\n");
    }
    // {
    //     printf("enter the value of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d element of the array is %d\n",i,marks[i]);
    // }
    
    // marks[0] = 34 ;
    // marks[1] = 40 ;
    // marks[2] = 45 ;
    // marks[3] = 35 ;
    // printf("marks of student 1 is %d\n", marks[0]);
    // printf("marks of student 2 is %d\n", marks[1]);
    // printf("marks of student 3 is %d\n", marks[2]);
    // printf("marks of student 4 is %d\n", marks[3]);


    return 0;
}