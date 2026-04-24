#include<stdio.h>
int main(){
    float price = 18.0;
    float *ptr = &price;
   printf("ptr = %u",ptr);
    ptr ++;
    printf("ptr = %u",ptr);
     ptr --;
    printf("ptr = %u",ptr);
    
    return 0;
}