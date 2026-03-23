#include<stdio.h>
int main(){
    int A[6]={0,2,4,6,8,10};
    int B[6]={1,3,5,7,9,11};
    int C[6];
    for(int i=0;i<6;i++){
       C[i]= A[i] + B[i];
    }
    printf("Array A (Even):");
    for(int i=0;i<6;i++){
        printf("%d",A[i]);
    }
    printf("Array B (odd):\n");
    for(int i=0;i<6;i++){
        printf("%d",B[i]);
    }
    printf("Addition(C):");
    for(int i=0;i<6;i++){
        printf("%d\n",C[i]);
    }    
    return 0;
} 