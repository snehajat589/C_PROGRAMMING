#include<stdio.h>
int main(){
    int a[10][10],rows,columns;
    printf("Enter the size of rows");
    scanf("%d",& rows);
    printf("Enter the size of columns");
    scanf("%d",&columns);
    
   
    printf("enter the elements in the matrix");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
           scanf("%d",& a[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
           
            printf("  %d ",a[i][j]);
        }
        printf(" \n");
       
    }
   
return 0;

}
