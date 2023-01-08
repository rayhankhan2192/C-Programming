/*https://codeforces.com/problemset/problem/1/A*/
#include<stdio.h>
int main()
{
    long long int m,n,a,x,y;
    scanf("%lld %lld %lld",&m,&n,&a);
    if(m%a==0) x = m/a;
    else x = m/a + 1;
    if(n%a==0) y = n/a;
    else y = n/a + 1;
    result = x*y;
    printf("%lld",x*y);

}
