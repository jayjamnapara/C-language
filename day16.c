#include <stdio.h>
#include <conio.h>
void main()
{
    // que-1
    // int m, n;
    // // size of array
    // printf("enter the row size:");
    // scanf("%d", &m);
    // printf("enter the col size:");
    // scanf("%d", &n);
    // // initialize
    // int arr[m][n];
    // // get elememnt from user
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("arr[%d][%d]=", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // // calculate avarage
    // int sum = 0;
    // int total_ele = m * n;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    // }
    // printf("sum of matrix:%d", sum);
    // double avg = (double)sum / total_ele;
    // printf("array of avarage element:%.2f", avg);

    // que-2
    // int m, n;
    // // size of array
    // printf("enter the row size:");
    // scanf("%d", &m);
    // printf("enter the col size:");
    // scanf("%d", &n);
    // // initialize
    // int arr_a[m][n];
    // int arr_b[m][n];
    // // get elememnt from user
    // printf("enter the array A value:");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("arr[%d][%d]=", i, j);
    //         scanf("%d", &arr_a[i][j]);
    //     }
    // }
    // printf("enter the array B value:");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("arr_b[%d][%d]=", i, j);
    //         scanf("%d", &arr_b[i][j]);
    //     }
    // }
    // int arr_c[m][n];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr_c[i][j]= arr_a[i][j] + arr_b[i][j]; 
    //     }
    // }
    // printf("sum of arr_c:");
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         printf("%d ",arr_c[i][j]); 
    //     }
    //     printf("\n");
    // }

    // que-3
    // int m,n,sum=0;
    // printf("enter the row and column:");
    // scanf("%d",&m);
    // n=m;
    // int arr[m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("arr[%d][%d]=",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // // calculate the sum of dingonal element 
    // for(int i=0; i<m; i++){
    //     sum += arr[i][i];
    // }
    // printf("diagonal element of an Array:%d\n",sum);

    // que-4
    int arr[5][5];
    int i,j,sum=0;
    for(i=0; i<5; i++){
        for (j=0; j<5; j++){
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==0||i==4||j==0||j==4){
                printf("%d",arr[i][j]);
                sum += arr[i][j];
            }
        }
        printf("\n");
        // printf("");
    }
    printf("the sum of boundary %d",sum);
}