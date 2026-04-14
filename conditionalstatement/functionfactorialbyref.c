#include<stdio.h>

int add(int a , int b){
    return a + b;
    printf("addition is %d\n:");
}
int main(){
    int  x = 10, y = 20;
    add(&x,&y);
    return 0;
}