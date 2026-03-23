#include<stdio.h>
int main(){
    int a[5]; 
    int b[5]; int sum[5];
    printf("Enter the element in first array\n");
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
      printf("Enter the element in second array\n");
    for(int i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
  
    printf("the sum of these two arrays\n");
    for(int i=0;i<5;i++)
{
    printf("%d  ",sum[i]=a[i]+b[i]);
}
  for(int i=4; i>=0; i--){
sum[i]=a[i]+b[i];
 printf("%d\t",sum[i]);
  }

return 0;


}