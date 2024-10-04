#include <stdio.h>
#include <conio.h>

void main(){
    // que-1
    char str[10];
    int i;
    printf("enter the string:");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase string:%s\n",str);

    // que-2
    char str[10];
    int i;
    printf("enter the string:");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("Lowercase string:%s\n",str);

    // que-3
    char str[10];
    int i;
    printf("enter the string:");
    scanf("%s",str);
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("toggle case string:%s\n",str);
}