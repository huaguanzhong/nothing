#include<stdio.h>

struct student{
    unsigned long long id;
    char name[50];
    char gender;
    unsigned int age;
};


int main() {
    struct student stu1;
    printf("Enter the student id: ");
    scanf("%llu", &stu1.id);
    printf("Enter the student name: ");
    scanf("%s", stu1.name);
    printf("Enter the student gender: ");
    scanf("%s", stu1.gender);
    printf("Enter the student age: ");
    scanf("%u", &stu1.age);

    struct student stu2;
    stu2 = stu1;

    printf("Student 1: %llu, %s, %c, %u\n", stu1.id, stu1.name, stu1.gender, stu1.age);
    printf("Student 2: %llu, %s, %c, %u\n", stu2.id, stu2.name, stu2.gender, stu2.age);


    return 0;    
}