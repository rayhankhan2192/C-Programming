#include <stdio.h>
struct person
{
    char name[30];
    int age;
    float salary;

};
int main()
{
    struct person person[2];
    int i;
    printf("\n\t\tPress Enter to start\n\n");
    for (i = 0; i < 2; i++)
    {
        printf("Enter information for person %d :\n",i+1);
        gets(person[i].name);
        printf("Enter name = ");
        gets(person[i].name);

        printf("Enter age = ");
        scanf("%d",&person[i].age);

        printf("Enter salary = ");
        scanf("%f",&person[i].salary);
        printf("\n");

    }

    for (i = 0; i < 2; i++)
    {
        printf("\n\nPerson-%d : \n",i+1);
        printf("Name = %s\n",person[i].name);
        printf("Age = %d\n", person[i].age);
        printf("Salary = %.2f\n", person[i].salary);
    }
    return 0 ;
}
