
/*https://codeforces.com/problemset/problem/977/A*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        int mod = n%10;
        if(mod==0) n/=10;
        else n--;
    }
    cout<<n;
}
