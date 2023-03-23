#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    int arra[n+1];

    for(int i=1;i<=n; i++){
        cin>>s;
        arra[s] = i;
        //when i=1, s=2 arra[2] = 1;
        //when i=2, s=3 arra[3] = 3;
        //when i=3, s=4 arra[4] = 3;
        //when i=4, s=1 arra[1] = 4;
    }

    for(int i=1;i<=n; i++){
        cout<<arra[i]<<" ";
    }
}