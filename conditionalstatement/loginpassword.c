#include<stdio.h>
  int main(){
    char user_id;
    int age, grade, password;
    printf("Enter your user ID:");
    scanf("%c",&user_id);
    printf("Enter your password:");
    scanf("%d",&password);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your grade:");
    scanf("%d",&grade);
    printf("\n============LOGIN PROCESS START===========\n\n");

    //check User ID
    if(user_id == 'A'){
        printf("User ID verified\n");

        //check password
        if(password ==12345){
            printf("password verified\n");
            printf("login successful\n");

            // check age
            if(age>18){
                printf("Eligible for student login \n");

            }
            if(age<=18){
                printf("Not eligible for student login\n");
            }

            //check Grade
            if(grade>90){
                printf("you are a suitable condidate\n");
            }
            if(grade<=90){
                printf("you are not a suitable condidate\n");
            }
           if(password !=123)
           {
            printf("Incorrect password!login failed\n");
           }
           if(user_id !='A'){
            printf("Invalid uder ID!login failed\n\n");
           }
        }
        printf("\n========== LOGIN PROCESSEND===========\n");
}
return 0;
  }