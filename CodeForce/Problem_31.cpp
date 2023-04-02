#include<iostream>
using namespace std;
int main(){
    int n;
    double ans;
    cin>>n;
    int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
        ans += arr[i];
     }
     cout<<ans/n<<endl;
}