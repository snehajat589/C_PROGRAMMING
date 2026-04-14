#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "Sneha";
    int i, len;

    len = strlen(name);

    for(i = len - 1; i >= 0; i--){
        printf("%c", name[i]);
    }

    return 0;
}