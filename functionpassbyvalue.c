#include<stdio.h>

void square(int n);
void_square(int* n);


int main(){
int number = 4;
  square(number);
  printf("number = %d\n",number);

  _square(&number);
  printf("number = %d\n",number);
}
void square(int n){
    n = n * n;
printf("square= %d\n",n);
return 0;
}

void_square(int* n){
    *n = (*n)* (*n);
    printf("square= %d\n",*n);
}
