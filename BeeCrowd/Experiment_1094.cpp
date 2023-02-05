#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int total=0;
    int total_C=0;
    int total_R=0;
    int total_S=0;

    int num;
    char character;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>num>>character;
        total += num;
        if(character == 'C'){
            total_C += num;
        }
        if(character == 'R'){
            total_R += num;
        }
        if(character == 'S'){
            total_S += num;
        }
    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<total_C<<endl;
    cout<<"Total de ratos: "<<total_R<<endl;
    cout<<"Total de sapos: "<<total_S<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<(total_C*100.00)/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(total_R*100.00)/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(total_S*100.00)/total<<" %"<<endl;
    return 0;
}

