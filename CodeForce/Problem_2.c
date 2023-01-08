/*https://codeforces.com/problemset/problem/4/A*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2)
    {
        printf("NO");
    }
    else
    {
        if(n%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}