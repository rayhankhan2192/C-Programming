
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,mod;
    cin>>x;
    cout<<x<<endl;
    cout<<x/100<<" nota(s) de R$ 100,00"<<endl;
    mod = x%100;

    cout<<mod/50<<" nota(s) de R$ 50,00"<<endl;
    mod = mod%50;

    cout<<mod/20<<" nota(s) de R$ 20,00"<<endl;
    mod = mod%20;

    cout<<mod/10<<" nota(s) de R$ 10,00"<<endl;
    mod = mod%10;

    cout<<mod/5<<" nota(s) de R$ 5,00"<<endl;
    mod = mod%5;

    cout<<mod/2<<" nota(s) de R$ 2,00"<<endl;
    mod = mod%2;

    cout<<mod/1<<" nota(s) de R$ 1,00"<<endl;
    mod = mod%1;
    return 0;
}
