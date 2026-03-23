#include<stdio.h>
int main(){
    int num[5]={-1,2,3,-5,-6,};
    for(int i=0; i<=4; i++)
    {
       if(num[i]<0){
        printf("%d",num[i]);
    }
    }
    return 0;
}