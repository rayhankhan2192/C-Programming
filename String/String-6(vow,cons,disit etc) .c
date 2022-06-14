/*Write a programe that can find total vowel,consonant,
digit,word & symbol from string */
#include<stdio.h>
int main()
{
    printf("\n\t\t========== Find Vowel, Consonant, Digit, Word & Symbol ==========\t\t");
    printf("\n\n");
    char string[50];
    int i,vowel,consonant,digit,word,symbol;
    printf("Enter a String = ");
    gets(string);
    i=vowel=consonant=digit=word=symbol=0;
    printf("\n\n");

    char ch;
    while((ch=string[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| 
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        vowel++;
        else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        consonant++;
        else if(ch>='0' && ch<='9')
        digit++;
        else if(ch==' ')
        word++;
        else
        symbol++;

        i++;
    }
    word++;
    printf("Total vowel = %d\n",vowel);
    printf("Total consonant = %d\n",consonant);
    printf("Total digit = %d\n",digit);
    printf("Total word  = %d\n",word);
    printf("Symbol = %d",symbol);

getch();
}