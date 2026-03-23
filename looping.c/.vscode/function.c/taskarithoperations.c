#include<stdio.h>

int add();
int sub();
int multi();
int div();

    int add(){
    int a,b,sum;
    printf("Enter the number of a & b:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    Printf("display Addition %d",&c);

    }
   
    int sub(){
    int a,b,sub;
    printf("Enter the number of a & b:");
    scanf("%d %d",&a,&b);
    sub=a-b;
    Printf("display subtraction %d",&c);

    }

   int multi(){
    int a,b,multi;
    printf("Enter the number of a & b:");
    scanf("%d %d",&a,&b);
    multi=a*b;
    Printf("display multiplication %d",&c);

   }
    

    int div(){
    int a,b,div;
    printf("Enter the number of a & b:");
    scanf("%d %d",&a,&b);
    div=a/b;
    Printf("display division %d",&c);
    }
    //calling of function//
    int main(){
    add();
    sub();
    multi();
    div();
    }
    

