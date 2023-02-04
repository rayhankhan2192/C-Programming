#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day1,h1,m1,s1;
    int day2,h2,m2,s2;
    string nam1,nam2;
    cin>>nam1>>day1;
    scanf("%d : %d : %d",&h1,&m1,&s1);
    cin>>nam2>>day2;
    scanf("%d : %d : %d",&h2,&m2,&s2);
    int s = s2-s1;
    int m = m2-m1;
    int h = h2-h1;
    int day = day2 - day1;
    if(s<0){
        s+=60;
        m--;
    }
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h += 24;
        day--;
    }
    cout<<day<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;

    return 0;

}

