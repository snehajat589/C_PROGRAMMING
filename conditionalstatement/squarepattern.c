#include<stdio.h>
int main(){
    char arr[5]= {'*','*','*','*','*'};
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%C", arr[j]);
        }
        printf("\n");

    }
    return 0;
}