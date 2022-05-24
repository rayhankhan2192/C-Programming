/* write a program to find ecademic result Greade */

#include<stdio.h>
int main()
{
    float marks1,marks2,marks3;
    printf("Enter Rayhan Math result = ");
    scanf("%f",&marks1);

    printf("Enter Rayhan Physics result = ");
    scanf("%f",&marks2);

    printf("Enter Rayhan Chemistry number = ");
    scanf("%f",&marks3);

    if(marks1>=80)
        printf("A+\n");

    else if(marks1>=70)
        printf("A\n");

    else if(marks1>=60)
        printf("A-\n");

    else if(marks1>=50)
        printf("B\n");

    else if(marks1>=40)
        printf("c\n");

    else if(marks1>=33)
        printf("D\n");

     else
        printf("MATH FAIL\n");

        if(marks2>=80)
        printf("A+\n");

    else if(marks2>=70)
        printf("A\n");

    else if(marks2>=60)
        printf("A-\n");

    else if(marks2>=50)
        printf("B\n");

    else if(marks2>=40)
        printf("c\n");

    else if(marks2>=33)
        printf("D\n");

     else
        printf("Physics FAIL\n");

        if(marks3>=80)
        printf("A+\n");

    else if(marks3>=70)
        printf("A\n");

    else if(marks3>=60)
        printf("A-\n");

    else if(marks3>=50)
        printf("B\n");

    else if(marks3>=40)
        printf("c\n");

    else if(marks3>=33)
        printf("D\n");

     else
        printf("Chemistry FAIL");

  getch();

}
