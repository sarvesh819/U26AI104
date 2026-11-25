#include <stdio.h>

struct book
{
    int id;
    char title[50];
    char author[50];
    float price;
    int pages;
};

void readBook(struct book *p)
{
    printf("Enter book id: ");
    scanf("%d", &p->id);

    printf("Enter title: ");
    scanf(" %[^\n]", p->title);

    printf("Enter author: ");
    scanf(" %[^\n]", p->author);

    printf("Enter price: ");
    scanf("%f", &p->price);

    printf("Enter number of pages: ");
    scanf("%d", &p->pages);
}

void displayBook(struct book *p)
{
    printf("\nBook Information\n");
    printf("Id     : %d\n", p->id);
    printf("Title  : %s\n", p->title);
    printf("Author : %s\n", p->author);
    printf("Price  : %.2f\n", p->price);
    printf("Pages  : %d\n", p->pages);
}

int main()
{
    struct book b;
    struct book *ptr = &b;

    readBook(ptr);
    displayBook(ptr);

    return 0;
}