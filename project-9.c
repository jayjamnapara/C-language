#include <stdio.h>

struct student{
    int rollno;
    char name[50];
    int chem_mark;
    int maths_mark;
    int phy_mark;
};
void totalmark(struct student std){
    float total = std.chem_mark + std.maths_mark + std.phy_mark;
    float percentage = (total/300) * 100;
    printf("rollno:%d | name: %s | percentage: %f/n",std.rollno, std.name,percentage);
} 

int main(){
    struct student std_1[5];
    for(int i=0; i<5; i++){
        printf("enter the student detail:\n");
        printf("enter roll no:");
        scanf("%d",&std_1[i].rollno);
        printf("enter the name:");
        scanf("%s",&std_1[i].name);
        printf("chemistry mark:");
        scanf("%f",&std_1[i].chem_mark);
        printf("maths mark:");
        scanf("%f",&std_1[i].maths_mark);
        printf("physic mark:");
        scanf("%f",&std_1[i].phy_mark);
    }
    printf("printing the student data:\n");
    for(int i=0; i<5;i++){
        totalmark(std_1[i]);
    }
}