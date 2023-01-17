/*https://codeforces.com/problemset/problem/112/A*/
/*A. Petya and Strings*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s",&a);
    scanf("%s",&b);
    int length = strlen(a);
    for(int i=0; i<length; i++)
    {
        if(a[i]<97) a[i] += 32;
        if(b[i]<97) b[i] += 32;
    }
    for(int i=0; i<length; i++)
    {
        if(a[i] > b[i])
        {
            printf("1");
            return 0;
        }
        if(b[i] > a[i])
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("0");
    return 0;
}
