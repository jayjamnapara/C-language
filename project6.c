// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char pwd[100];
//     int i;
//     int ishas=0,isletter=0,isdigit=0;

//     printf("enter the password:");
//     scanf("%s",&pwd);

//     int length = strlen(pwd);
//     if(length < 3 || length > 15){
//         printf("password must be 3 or 15 charater long");
//         return 1;
//     }

//     for(i=0; i <= length; i++){
//         if(pwd[i] == '@'){
//             ishas = pwd[i];
//         }
//         else if(pwd[i] >= 'A' || pwd[i] <= 'Z'){
//             isletter = pwd[i];
//         }
//         else if(pwd[i] >= 'a' || pwd[i] <= 'z'){
//             isletter = pwd[i];
//         }
//         else if(pwd[i] >= '0' || pwd[i] <= '9'){
//             isdigit = pwd[i];
//         }
//         else{
//             printf("password is invalid choose!");
//         }
//     }
//     if(ishas || isletter || isdigit){
//         printf("password is strong!!");
//     }
//     else{
//         printf("password is not storng!!");
//     }
//     return 1;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char email[100], password[100];

    printf("your email:");
    scanf("%s", &email);
    printf("your password:");
    scanf("%s", &password);

    int len_1 = strlen(email);
    if (len_1 < 3 || len_1 > 30)
    {
        printf("email must be 3 to 30 charater!");
        return 1;
    }
    int len_2 = strlen(password);
    if (len_2 < 3 || len_2 > 20)
    {
        printf("password must be 3 to 20 charater!");
        return 1;
    }
    if (strcmp(email, "Admin@gmail.com") == 0 && strcmp(password, "123456") == 0)
    {
        printf("Login successfully!\n");
    }
    else
    {
        printf("Login failed! Invalid credentials!\n");
    }
    return 0;
}