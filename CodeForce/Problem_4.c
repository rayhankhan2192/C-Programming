/*https://codeforces.com/problemset/problem/1/A*/
#include<stdio.h>
int main()
{
    int m,n,a,x,y,result = 0;
    scanf("%d %d %d",&m,&n,&a);
    if(m%a==0) x = m/a;
    else x = m/a + 1;
    if(n%a==0) y = n/a;
    else y = n/a + 1;
    result = x*y;
    printf("%d",x*y);

}
