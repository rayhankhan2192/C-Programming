#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum=0,n;
    for(int j=1; j>0; j++){
    cin>>a>>b;
    if(b<=0 || a<=0)return 0;
    if(a<b) swap(a,b);
    sum = 0;
    for(int i=b ; i<=a; i++){
        sum += i;
        cout<<i<<" ";
    }
    cout<<"Sum="<<sum<<endl;
    }
    return 0;
}

