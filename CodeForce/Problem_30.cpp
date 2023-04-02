#include<iostream>
using namespace std;
int main(){
    long long n;
    long long ans;
    cin>>n;
    if(n%2 == 0) ans = n/2;
    else ans = ((n+1)/(-2));
    
    cout<<ans<<endl;
}