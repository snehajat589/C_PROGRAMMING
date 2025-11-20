#include<stdio.h>
int main(){
    char user_id;
     int pass;
     int age;
     int grade;
     printf("Enter user id && password ");
     scanf("%s",&user_id);
     scanf("%d",&pass);
     printf("Enter age");
     scanf("%d",&age);
     printf("Enter grade");
     scanf("%d",&grade);
    if(user_id=='a'){
         if(pass==12345){    
        printf("login successful\n");
    }
}     
// check age
if(age>18){
      printf("you are eligible for login\n :");
} if(age<18){
      printf("you  are not eligible for login\n :");
}
// check grade 
if(grade>90){
      printf("you are suitable for condidate\n:");
}
if(grade<90)
{
      printf("you are not eligible for credentiial\n:");
}
      return 0;
}
    