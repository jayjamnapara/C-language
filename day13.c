#include <stdio.h>
#include <conio.h>

void main(){
    for(int i=1; i<=5; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }    
        for(int k=1; k<=i; k++){
            printf("%d",k);
        }
        printf("\n");
    }

    // que-2
    // int i,j,k;
    // for(i = 5; i >= 1; i--){
    //     for(j = 1; j<i ; j++){
    //         printf(" ");
    //     }
    //     for(k = i; k <= 5; k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

    // que-3
    // int i,j,k;
    // for(i = 5; i >= 1; i--){
    //     for(j = 1; j<i ; j++){
    //         printf(" ");
    //     }
    //     for(k = 5; k >= i; k--){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }

    // que-4
    // int i,j,k;
    // for(i = 1; i <= 5; i++){
    //     for(j = 1; j<i; j++){
    //         printf(" ");
    //     }
    //     for(k=5; k >=i; k--){
    //         printf("%d",(k % 2) ? 1 : 0);
    //     }
    //     printf("\n");
    // }

    // que-5
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<i; j++){
    //         printf(" ");
    //     } 
    //     for(int k=6-i; k>=1; k--){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }

    // que-6
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<i; j++){
    //         printf(" ");
    //     }
    //     for(int k=5; k>=i; k--){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }
}