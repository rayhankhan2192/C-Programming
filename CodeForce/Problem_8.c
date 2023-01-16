/*A. Beautiful Matrix*/
/*https://codeforces.com/problemset/problem/263/A*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,num=0,result=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&num);
            if(num == 1)
            {
                result = abs(i-3) + abs(j-3);
            }
        }
    }
    printf("%d",result);
}
