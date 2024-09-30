#include <stdio.h>
#include <conio.h>

void main(){
    // que-1
    // int i,n;
    // printf("enter array size:");
    // scanf("%d",&n);

    // int arr[n];

    // printf("enter the array element:");
    // for(i=0; i<n; i++){
    //     printf("a[%d]=",i);
    //     scanf("%d",&arr[i]);
    // } 
    // printf("Length of array: %d\n",n);


    // que-2
    // int n,i,sum=0;
    // float avg;

    // printf("enter the number:");
    // scanf("%d",&n);

    // int arr[n];

    // printf("enter the array of element:");
    // for(i = 0; i<n; i++){
    //     printf("a[%d]=",i);
    //     scanf("%d",&arr[i]);
    //     sum += arr[i];
    // }
    // avg = (float)sum / n;

    // printf("the avg of array: %.2f\n",avg);


    // que-3
    int n, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arrA[n], arrB[n], arrC[n];

    printf("Enter the elements of array A:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arrA[i]);
    }

    printf("Enter the elements of array B:\n");
    for (i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &arrB[i]);
    }

    printf("Adding the elements of array A and array B:\n");
    for (i = 0; i < n; i++) {
        arrC[i] = arrA[i] + arrB[i];
        printf("c[%d] = %d\n", i, arrC[i]);
    }

    printf("Array C is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arrC[i]);
    }
    printf("\n");

}