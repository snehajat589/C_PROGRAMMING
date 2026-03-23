#include<stdio.h>
int main(){
    char a[5]={'*','*','*','*','*'};
    for(int i=0; i<=4; i++){
        for(int j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}