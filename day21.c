// #include <stdio.h>
// #include <string.h>

// struct student{
//     int std_id;
//     char std_name[100];
//     int std_age;
//     char std_course[100];
//     char std_city[100];
//     int std_standard;
//     char std_school[100];
// };

// int main(){
//     struct student jhon;
//     struct student jhonson;
//     struct student jhony;
    
//     jhon.std_id = 1;
//     strcpy(jhon.std_name,"jhon");
//     jhon.std_age = 20;
//     strcpy(jhon.std_course,"maths");
//     strcpy(jhon.std_city,"rajkot");
//     jhon.std_standard = 12;
//     strcpy(jhon.std_school,"marwadi");

//     printf("%d ",jhon.std_id); 
//     printf("%s ",jhon.std_name);
//     printf("%d ",jhon.std_age);
//     printf("%s ",jhon.std_course);
//     printf("%s ",jhon.std_city);
//     printf("%d ",jhon.std_standard);
//     printf("%s ",jhon.std_school);

//     printf("\n\n");

//     jhonson.std_id = 2;
//     strcpy(jhonson.std_name,"jhonson");
//     jhonson.std_age = 18;
//     strcpy(jhonson.std_course,"english");
//     strcpy(jhonson.std_city,"ahemdabad");
//     jhonson.std_standard = 10;
//     strcpy(jhonson.std_school,"parul");

//     printf("%d ",jhonson.std_id); 
//     printf("%s ",jhonson.std_name);
//     printf("%d ",jhonson.std_age);
//     printf("%s ",jhonson.std_course);
//     printf("%s ",jhonson.std_city);
//     printf("%d ",jhonson.std_standard);
//     printf("%s ",jhonson.std_school);

//     printf("\n\n");

//     jhony.std_id = 3;
//     strcpy(jhony.std_name,"jhony");
//     jhony.std_age = 16;
//     strcpy(jhony.std_course,"hindi");
//     strcpy(jhony.std_city,"vadodara");
//     jhony.std_standard = 8;
//     strcpy(jhony.std_school,"nirma");

//     printf("%d ",jhony.std_id); 
//     printf("%s ",jhony.std_name);
//     printf("%d ",jhony.std_age);
//     printf("%s ",jhony.std_course);
//     printf("%s ",jhony.std_city);
//     printf("%d ",jhony.std_standard);
//     printf("%s ",jhony.std_school);
// }

// que-2 employee data
#include <stdio.h>
#include <conio.h>
#define max_emp 100

struct employee{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company_name[100];
};

int main(){
    struct employee emp[max_emp];
    int n;
    printf("enter the number of employee:");
    scanf("%d",&n);

    if(n>max_emp || n<0){
        printf("invalid number of employee:");
        return 0;
    }

    // get value form the user
    for(int i=1; i<=n; i++){
        printf("enter employee id:");
        scanf("%d",&emp->id);
        printf("enter employee name:");
        scanf("%s",&emp->name);
        printf("enter employee age:");
        scanf("%d",&emp->age);
        printf("enter employee role:");
        scanf("%s",&emp->role);
        printf("enter employee city:");
        scanf("%s",&emp->city);
        printf("enter employee experience:");
        scanf("%d",&emp->experience);
        printf("enter employee company name:");
        scanf("%s",&emp->company_name);
    }

    // print value form the user
    for(int i=0; i<n; i++){
        printf("%d ",emp->id);
        printf("%s ",emp->name);
        printf("%d ",emp->age);
        printf("%s ",emp->role);
        printf("%s ",emp->city);
        printf("%d ",emp->experience);
        printf("%s ",emp->company_name);
    }
}