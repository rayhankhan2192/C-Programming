#include<stdio.h>
#include<windows.h>
int main()
{
    int hour=0,minute=0,second=0;
    int d=1000;
    if(hour>12 || minute>60 || second>60)
    {
        printf("Error!");
        exit(0);
    }
    while(1)
    {
        second++;
        if(second>59)
        {
            minute++;
            second=0;
        }
        if(minute>59)
        {
            hour++;
            minute=0;
        }
        if(hour>12)
        {
            hour=1;
        }
        printf("\n Clock : ");
        printf("\n%02d:%02d:%02d",hour,minute,second);
        Sleep(d);
        system("cls");
    }

}
