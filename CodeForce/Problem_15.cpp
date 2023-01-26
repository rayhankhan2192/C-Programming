/*https://codeforces.com/problemset/problem/546/A*/
/*A. Soldier and Bananas*/
#include<iostream>
using namespace std;
int main()
{
    int k,n,w,cost=0,loan=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        cost += k*i;
    }
    if(cost>=n){
        loan = cost - n;
    }
    cout<<loan<<endl;
}
