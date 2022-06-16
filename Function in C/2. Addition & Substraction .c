#include<stdio.h>
void sum(int a,int b,int c){
    printf("The Addition is = %d\n",a+b+c);}
void sub(int a,int b,int c){
    printf("The Substraction is = %d\n",a-b-c);
int main(){
    printf("\n\t\t===== Addition =====\n\n");
   sum(5,5,5); sum(10,5,5); sum(20,10,5);
    printf("\n\t\t===== Substraction =====\n\n");
   sub(20,10,5); sub(25,5,5); sub(30,15,8);}