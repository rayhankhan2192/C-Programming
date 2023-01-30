/*https://codeforces.com/problemset/problem/41/A*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str_1;
    string str_2;
    cin>>str_1>>str_2;
    reverse(str_2.begin(),str_2.end());
    if(str_1==str_2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
