#include <stdio.h>

struct db
{
    int id;
    char name[30];
    float lang;
    float sci;
    float mat;
    float comp;
    float avg;
};

void printDB(struct db);

int main(void)
{
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d",&n);
    
    struct db std[n];

    printf("Enter student details: \n");

    for(int i=0;i<n;i++)
    {
        printf("Enter student id: ");
        scanf("%d",&std[i].id);
        getchar();
        printf("Enter student name: ");
        scanf("%[^\n]",&std[i].name);
        printf("Enter language marks: ");
        scanf("%f",&std[i].lang);
        printf("Enter science marks: ");
        scanf("%f",&std[i].sci);
        printf("Enter maths marks: ");
        scanf("%f",&std[i].mat);
        printf("Enter computer marks: ");
        scanf("%f",&std[i].comp);
        printf("\n");

        std[i].avg = (std[i].lang+std[i].sci+std[i].mat+std[i].comp)/4;
    }

    printf("Students scoring below average: \n");
    printf("ID\t\tName\t\tAverage\n");

    for(int i=0;i<n;i++)
    {
        if(std[i].avg<35)
            printDB(std[i]);
    }

    printf("\nStudents scoring above average: \n");
    printf("ID\t\tName\t\tAverage\n");

    for(int i=0;i<n;i++)
    {
        if(std[i].avg>=35)
            printDB(std[i]);
    }
}

void printDB(struct db a)
{
    printf("%d\t\t%s\t\t%.2f\n",a.id,a.name,a.avg);
}