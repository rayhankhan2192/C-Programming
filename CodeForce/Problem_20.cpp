/*https://codeforces.com/problemset/problem/116/A*/
#include<iostream>
using namespace std;
int main()
{
    int stopage,entry, exit,remember=0,sum=0;
    cin>>stopage;
    while(stopage>0)
    {
        cin>>exit>>entry;
        sum = sum - exit;
        sum = sum + entry;
        remember = max(remember,sum);
        stopage--;
    }
    cout<<remember;
}
