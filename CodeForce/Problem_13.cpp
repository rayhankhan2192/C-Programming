/*https://codeforces.com/problemset/problem/266/A*/
/*A. Stones on the Table*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    cin>> n;
    string str;
    cin>> str;
    for(int i=0; i<n; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
