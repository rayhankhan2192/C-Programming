/*https://codeforces.com/problemset/problem/236/A*/
/*A. Boy or Girl*/
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
    int n=0,i,j,k;
    int count = 0;
    char str[100];
    scanf("%s",&str);
    for(i = 0; i<strlen(str); i++){
        for(j = 0; j<strlen(str)-1; j++){
            if(str[j] > str[j+1]){
                swap(&str[j],&str[j+1]);
            }
        }
    }
    for(i=0; i<strlen(str); i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }
    if(count%2 == 0) printf("CHAT WITH HER!");
        else printf("IGNORE HIM!");

}
