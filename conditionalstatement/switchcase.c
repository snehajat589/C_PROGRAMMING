#include<stdio.h>
int man(){
    int day;
    printf("enter a number (1-7):");
    scanf("%d",&day);
    switch(day){
      case 1:
           printf("Monday\n");
           break;
      case 2:
           printf("tuesday\n");
           break;
      case 3:
           printf("wednesday\n");
           break;
      case 4:
           printf("thursday\n");
           break;
      case 5:
           printf("friday\n");
           break;
      case 6:
           printf("saturday\n");
           break;
      case 7:
           printf("sunday\n");
           break;
      default:
           printf("invalid input! please enter a number between 1 and 7\n");
      break;
 } 
 return 0;
}