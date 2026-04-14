#include<stdio.h>
#include<string.h>

struct person{
    char name;
    int age ;
    int salary;

};
 int main ()
 {
    printf("--------S1--------\n");
    struct person s1,s2;
    s1.name= 's';
    s1.age = 50;
    s1.salary = 40000;
    printf("name is %c\n",s1.name);
    printf("age is %d\n",s1.age);
    printf("salary is %d\n",s1.salary);

    printf("--------S2--------\n");

    s2.name= 'S';
    s2.age = 70;
    s2.salary = 60000;
    printf("name is %c\n",s2.name);
    printf("age is %d\n",s2.age);
    printf("salary is %d\n",s2.salary);


    
 }