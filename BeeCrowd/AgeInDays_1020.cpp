#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin>>days;
    int year = days/365;
    days -= year*365;
    int month = days/30;
    days -= month*30;
    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;

    return 0;
}

