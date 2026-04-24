#include<stdio.h>
int main(){
   int *ptr;
   int x;
  
   *ptr = &x;
   *ptr = 0;
   
   *ptr += 5;
   
   (*ptr)++;


printf(" x = %d",x);
printf(" *ptr = %d",*ptr);

    return 0;
}