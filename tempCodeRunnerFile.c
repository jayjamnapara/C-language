for(int i=1; i<= n; i++){
        for(int j=n-i; j>0; j--){
            printf(" ");
        }
        for(int k = i; k>=1; k--){
            printf("%d",k);
        }
        for(int l=2; l<=i; l++){
            printf("%d",l);
        }
        printf("\n");
    }