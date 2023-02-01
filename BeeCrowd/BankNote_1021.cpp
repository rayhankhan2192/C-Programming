#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    int value,mod,mod1;
    cin>>x;
    value = x;
    mod1 = 100*x;
    cout<<"NOTAS:"<<endl;
    cout<<value/100<<" nota(s) de R$ 100.00"<<endl;
    mod = value%100;

    cout<<mod/50<<" nota(s) de R$ 50.00"<<endl;
    mod = mod%50;

    cout<<mod/20<<" nota(s) de R$ 20.00"<<endl;
    mod = mod%20;

    cout<<mod/10<<" nota(s) de R$ 10.00"<<endl;
    mod = mod%10;

    cout<<mod/5<<" nota(s) de R$ 5.00"<<endl;
    mod = mod%5;

    cout<<mod/2<<" nota(s) de R$ 2.00"<<endl;
    mod = mod%2;

    cout<<"MOEDAS:"<<endl;

    cout<<mod/1<<" moeda(s) de R$ 1.00"<<endl;

    mod1 = mod1%100;
    cout<<mod1/50<<" moeda(s) de R$ 0.50"<<endl;
    mod1 = mod1%50;

    cout<<mod1/25<<" moeda(s) de R$ 0.25"<<endl;
    mod1 = mod1%25;

    cout<<mod1/10<<" moeda(s) de R$ 0.10"<<endl;
    mod1 = mod1%10;

    cout<<mod1/5<<" moeda(s) de R$ 0.05"<<endl;
    mod1 = mod1%5;

    cout<<mod1/1<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}

