#include<iostream>
using namespace std;
int main(){
string arr1,arr2;
cin>>arr1>>arr2;
for(int i=0; i<arr1.length(); i++){
    if(arr1[i] == arr2[i]){
        arr1[i] = '0';
    }else{
        arr1[i] = '1';
    }
}
for(int i=0; i<arr1.length(); i++){
    cout<<arr1[i];
}
}