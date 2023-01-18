/*https://codeforces.com/problemset/problem/339/A*/
/*A. Helpful Maths*/
#include<stdio.h>
#include<string.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char str[100];
    int i,j;
    scanf("%s",&str);
    int k=strlen(str);
    for(i=0; i<k; i=i+2)
    {
        for(j=0; j<k-1; j=j+2)
        {
            if(str[j] > str[j+2])
            {
                swap(&str[j],&str[j+2]);
            }
        }
    }
    for(i=0; i<k; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
