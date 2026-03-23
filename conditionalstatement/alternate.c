#include<stdio.h>
int main(){
    char a[10];
    for(int i=0; i<10;i++){
        if(i%2==0) a[i]='*';
        else a[i]='#';
    }
    for(int i=0; i<10; i++){
        printf("%C",a[i]);
    }
    return 0;
}