// quetions-1
// #include <stdio.h>
// #include <conio.h>

// void main(){

//     char alpha = 'a';
//     do{
//         printf("%c\n",alpha);
//         alpha+=4;    
//     }
//     while(alpha <= 'z');
// }

// question-2
// #include <stdio.h>
// #include <conio.h>

// void main(){
//     int i , count = 0;

//     printf("enter the number:");
//     scanf("%d",&i);

//     do{
//         i /= 10;
//         ++count;
//     }
//     while(i != 0); 
//     printf("number of digit:%d",count);
// }

// question-3

// #include <stdio.h>
// #include <conio.h>

// void main(){
//     int d , sum = 0, fd , ld;
//     printf("enter the number:");
//     scanf("%d",&d);
//     fd = d;
//     ld = d % 10;
//     while(d >= 10)
//     { d = d / 10; }
//     fd = d;
//     sum = fd + ld;
//     printf("sum of first digit and last digit:%d",sum);
// }