#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    double i;
    int hour=0,minute=0,second=0;

 clrscr();
    

    start:{}
    for(hour;hour<24;hour++)
    {
        for(minute; minute<60; minute++)
        {
            for(second; second<60; second++)
            {
                clrscr();
                printf("%d:%d:%d",hour,minute,second);
                if(hour<12){
                    printf("AM");
                }
                else{
                        printf("PM");
                    }
                    for(i=0; i<3619999; i++)
                    i++;
                    i--;
            }
            second=0;
        }
        minute=0;
    }
    hour=0;
    goto start;

    getch();

}
