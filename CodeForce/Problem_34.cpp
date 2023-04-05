#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,n=4;
    long long arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1])count++;
    }
    cout<<count<<endl;
}