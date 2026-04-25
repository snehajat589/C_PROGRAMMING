#include<stdio.h>
int main(){
    int a = 5;
    int *p = &a;
    *p = *p + 3;
    printf("%d",a);
    return 0;
}