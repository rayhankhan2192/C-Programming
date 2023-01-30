/*https://codeforces.com/problemset/problem/266/B*/
#include<iostream>
#include<string>
using namespace std;
int main()
{

    int n1,n2;
    cin>>n2>>n1;
    string str;
    cin>>str;
    while(n1>0)
    {
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
        n1--;
    }
    cout<<str<<endl;
}
