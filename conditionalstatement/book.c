#include<stdio.h>

struct book{
    int id;
    char name[50];//by default public
    char author[50];//data members
    float  price;
};
int main(){
      struct book  b[5];
      int i,n;
      printf("Enter number of books:");
      scanf("%d",&n);
      for(i = 0; i<n; i++){
        printf("\nenter details of books%d\n",i+1);
        printf("Enter book id:");
        scanf("%d",&b[i].id);
        printf("Enter book  name:");
        scanf("%s",b[i].name);
        printf("Enter author:");
        scanf("%s",b[i].author);
        printf("Enter price:");
        scanf("%f",&b[i].price);
      }
      printf("\n------books details--\n");
      for(i=0;i<n;i++){
        printf("\nenter details of books%d\n",i+1);
        printf("\nbook %d\n");
        printf("id:%d\n",b[i].id);
        printf("name:%s\n",b[i].name);
        printf("author:%s\n",b[i].author);
        printf("price:%2f\n",b[i].price);

       
      
      return 0;
      }

}