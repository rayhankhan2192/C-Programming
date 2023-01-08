/*https://codeforces.com/problemset/problem/158/A*/
#include<stdio.h>
int main()
{
    int n,k,a[100],count = 0;
    scanf("%d %d",&n,&k);
    if(n>=k)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
    }
    for(int j = 0; j < n; j++)
    {
        if(a[j]>=a[k-1] && a[j]>0)
        {
            count++;
        }
    }
    printf("%d",count);
}
