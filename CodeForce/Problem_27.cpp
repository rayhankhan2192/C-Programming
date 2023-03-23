#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    int p,q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q;
        if(p<q && q-p>1) count++;
    }
    cout<<count<<endl;
}