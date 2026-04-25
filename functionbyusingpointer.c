#include<stdio.h>
void add(int *a,int *b){
   int  sum = *a + *b;
   printf("sum = %d",sum);
}
int main(){
       int x = 10, y = 20;
       add(&x,&y);
       return 0;
}
