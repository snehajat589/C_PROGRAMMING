#include<stdio.h>
int main(){
    int a=10,b=15;
        printf("Enter value  a");
        scanf("%d",&a);
        printf("Enter value  b");
        scanf("%d",&b);
        a = a + b;
        b = a - b;
        a = a - b; 
        printf("value of after swapping a&b %d%d\n",a,b);
        return 0; 
}