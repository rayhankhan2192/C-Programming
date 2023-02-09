#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a=-1,b=-1;
    int n=1;
    while(n==1)
    {
        do
        {
            cin>>a;
            if(a<0 || a>10)
            {
                cout<<"nota invalida"<<endl;
            }
        }
        while(a<0 || a>10);
        do
        {
            cin>>b;
            if(b<0 || b>10)
            {
                cout<<"nota invalida"<<endl;
            }
        }
        while(b<0 || b>10);
        cout << "media = " << fixed << setprecision(2) << ((a + b) / 2) << endl;
        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin>>n;
        }
        while(n!=1 && n!=2);
    }
    return 0;
}

