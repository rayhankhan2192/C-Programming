//write a program with FOR-loop where 1-10 will print and 3,6,9 won't print

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i%3==0)
            continue;
            printf("%d\n",i);

         if(i==10)
            break;
    }
    getch();
}


