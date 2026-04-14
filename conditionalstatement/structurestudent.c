#include<stdio.h>
#include<string.h>

struct student{
         char name;
         int age;
         long mob_no;
         char prog;
        
};
int main(){
        struct student s1;
        s1.name='s';
        s1.age='20';
        s1.mob_no='1234';
        s1.prog='b';
        printf("name is %c\n",s1.name);
        printf("age is %d\n",s1.age);
        printf("mob_no is %d\n",s1.mob_no);
        printf("prog is %c\n",s1.prog);
    
 

}
