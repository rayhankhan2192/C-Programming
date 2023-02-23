#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int array[n];
    int width=0;
    for(int i=0; i<n; i++){
        cin>>array[i];
        if(array[i] > h){
            width += 2;
        }else{
            width += 1;
        }
    }
    cout<<width<<endl;
}