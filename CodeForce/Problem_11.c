/*https://codeforces.com/problemset/problem/281/A*/
/*A. Word Capitalization*/
#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",&str);
    if(str[0]>=97) str[0]-=32;
    printf("%s",str);
}
