#include<stdio.h>
#include<string.h>
struct bankaccount
{
    char bank_name[60];
    char username[50];
    long account_no;
    int pass;
    char ifsccode[30];
    float salary;
    long mob_no;
    int bank_balance;

};
int main(){
    struct bankaccount s1;
    strcpy(s1.bank_name,"sbi bank");
    strcpy(s1.username, "snehajat");
    s1.account_no=2983774543;
    s1.pass=12435;
    strcpy(s1.ifsccode,"SBIN0001234");
    s1.salary=80000;
    s1.mob_no=1234;
    s1.bank_balance;



    printf("bank_name %s\n",s1.bank_name);
    printf("username %s\n",s1.username);
     printf("account_no %d\n",s1.account_no);
    printf("pass %d\n",s1.pass);
    printf("ifsccode %s\n",s1.ifsccode);
    printf("salary %f\n",s1.salary);
    printf("mob_no %ld\n",s1.mob_no);
    printf("bank_balance %d\n",s1.bank_balance);
  
return 0;
}

