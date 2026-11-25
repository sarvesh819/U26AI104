#include<stdio.h>
struct books
{
    char title[20];
    char author[20];
    int pages;
    float price;
};
int main()
{
    struct books b[3];
    int i;
    for(i=0;i<3;i++)
        {
            printf("enter the title of book %d:", i+1);
            scanf("%s", b[i].title);
            printf("Enter the author of book %d:", i+1);
            scanf("%s", b[i].author);
            printf("Enter the number of pages for book %d:" , i+1);
            scanf("%d", &b[i].pages);
            printf("Enter the price of book %d:", i+1);
            scanf("%f", &b[i].price);

        }
    for(i=0;i<3;i++)
        { 
            printf("\n the information of book %d is \n", i+1);
            printf("title: %s\nauthor:%s\npages:%d\nprice:%f\n ",b[i].title, b[i].author, b[i].pages, b[i].price);
                
        }
    return 0;
    
}    