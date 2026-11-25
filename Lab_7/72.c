#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int marks;
};

void displayTop(struct student s[], int n)
{
    int i, found = 0;

    printf("\nStudents with marks greater than 500:\n");
    printf("Roll\tName\t\tMarks\n");

    for (i = 0; i < n; i++)
    {
        if (s[i].marks > 500)
        {
            printf("%d\t%-15s\t%d\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
        }
    }

    if (!found)
        printf("No student has marks greater than 500\n");
}

int main()
{
    struct student st[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &st[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", st[i].name);

        printf("Marks: ");
        scanf("%d", &st[i].marks);
    }

    displayTop(st, 3);

    return 0;
}