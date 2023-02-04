#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,sum=0,mini,mixi;
    cin>>num1>>num2;
    if(num1<num2){
        mini = num1;
        mixi = num2;
    }else{
        mini = num2;
        mixi = num1;
    }
    for(int i=mini+1; i<mixi; i++){
        if(i%2!=0){
            sum += i;
        }
    }
    cout<<sum<<endl;

    return 0;

}

