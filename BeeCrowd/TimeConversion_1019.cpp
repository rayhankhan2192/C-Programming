#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sec;
    cin>>sec;
    int hour = sec/3600;
    sec-= hour*3600;
    int minute = sec/60;
    sec -= minute*60;
    printf("%d:%d:%d\n",hour,minute,sec);
    return 0;
}

