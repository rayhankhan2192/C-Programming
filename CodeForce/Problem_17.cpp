/*https://codeforces.com/problemset/problem/59/A*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char ch;
    int small=0,capital=0;
    cin>>str;
    int count = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z')small++;
        else capital++;
    }

    if(small>=capital){
        for(int i=0; i<str.size(); i++){
            ch = tolower(str[i]);
            cout<<ch;
        }
    }
    else{
        for(int i=0; i<str.size(); i++){
            ch = toupper(str[i]);
            cout<<ch;
        }
    }
}
