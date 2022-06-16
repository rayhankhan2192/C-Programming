#include <stdio.h>
struct person
{
    int age;
    float salary;
    char name[30];
};
struct person person1, person2, person3;

int main()
{
    printf("\n\t\t\t======Information======\t\n");
    printf("Person-1 : \n");
    strcpy(person1.name, "Mr. Jhon");
    person1.age = 25;
    person1.salary = 35000;
    printf("Name : %s\n", person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("\nPerson-2 : \n");
    strcpy(person2.name, "Mr. Davide");
    printf("Name = %s\n",person2.name);
    struct person person2 = {27,38750.75};
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("\nPerson-3 : \n");
    strcpy(person3.name, "Donal Trump");
    printf("Name = %s\n",person3.name);
    struct person person3 = {28,37820};
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);
    
    return 0;

};