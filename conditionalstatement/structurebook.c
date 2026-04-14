#include<stdio.h>
#include<string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[5];  // 5 books store karne ke liye array

    // Book details input
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter details of Book %d\n", i+1);

        printf("Enter ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    // Display books
    printf("\n--- Book Repository ---\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nBook %d Details:\n", i+1);
        printf("ID: %d\n", b[i].id);
        printf("Name: %s\n", b[i].name);
        printf("Author: %s\n", b[i].author);
        printf("Price: %.2f\n", b[i].price);
    }

    return 0;
}