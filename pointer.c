#include <stdio.h>
#include <conio.h>

int square(int *arr, int size){
    for(int i=0; i<size; i++){
        *(arr+i) = (*(arr+i)) * (*(arr+i));
    }
}

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int size;

    printf("enter the array size:");
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
    }
    square(arr, size);
    printf("square of each element:\n");
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("\n\n\n\n\n");

    int x , y;

    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);

    printf("before swap:\n");
    printf("x:%d\n",x);
    printf("y:%d\n",y);

    swap(&x , &y);
    printf("after swap:\n");
    printf("x:%d\n",x);
    printf("y:%d\n",y);    
}