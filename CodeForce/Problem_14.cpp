/*https://codeforces.com/problemset/problem/791/A*/
/*A. Bear and Big Brother*/
#include<iostream>
using namespace std;
int main()
{
    int a, b,count = 0;
    cin>>a;
    cin>>b;
    if(a<=b)
    {
        while(a<=b)
        {
            a = a*3;
            b = b*2;
            count++;
        }
    }
    cout<<count<<endl;
}
