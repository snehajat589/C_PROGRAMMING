#include<stdio.h>

struct Profile{
    int id;
    char name[50];//by default public
    int innings[50];//data member
    int runs;
    int strike_rate;

};
int main(){
      struct Profile  p[5];
      int i,n;
      printf("Enter number of profile:");
      scanf("%d",&n);
      for(i = 0; i<n; i++){
        printf("\nenter details of Profile%d\n",i+1);
        printf("Enter Profile id:");
        scanf("%d",&p[i].id);
        printf("Enter profile  name:");
        scanf("%s",p[i].name);
        printf("Enter inings:");
        scanf("%s",p[i].innings);
        printf("Enter runs:");
        scanf("%f",&p[i].runs);
      }
      printf("\n------pooks details--\n");
      for(i=0;i<n;i++){
        printf("\nenter details of pooks%d\n",i+1);
        printf("\npook %d\n");
        printf("id:%d\n",p[i].id);
        printf("name:%s\n",p[i].name);
        printf("innings:%s\n",p[i].innings);
        printf("runs:%2f\n",p[i].runs);

       
      
      return 0;
      }

}