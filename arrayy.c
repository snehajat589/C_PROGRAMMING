#include<stdio.h>
int main(){
    int marks[3];
    printf("enter phy:");
    scanf("%d\n",&marks[0]);
    printf("enter chem:");
    scanf("%d\n",&marks[1]);
    printf("enter maths:");
    scanf("%d\n",&marks[2]);
prinf("phy = %d, chem=%d, maths=%d",marks[0],marks[1],marks[2]);
return 0;
}