#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
   float a,b,c;
   cin>>a>>b>>c;
   if(a>=(b+c) || b>=(a+c) || c>=(a+b)){
    cout<<"NAO FORMA TRIANGULO"<<endl;
   }
   else if(pow(a,2)==(pow(b,2)+pow(c,2)) || pow(c,2)==(pow(b,2)+pow(a,2)) || pow(b,2)==(pow(a,2)+pow(c,2))){
    cout<<"TRIANGULO RETANGULO"<<endl;
   }
   else if(pow(a,2)>(pow(b,2)+pow(c,2)) || pow(b,2)>(pow(a,2)+pow(c,2)) || pow(c,2)>(pow(b,2)+pow(a,2))){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
   }
   else if(pow(a,2)<(pow(b,2)+pow(c,2)) || pow(b,2)<(pow(a,2)+pow(c,2)) || pow(c,2)<(pow(b,2)+pow(a,2))){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
   }
   if(a==b && a==c)
    cout<<"TRIANGULO EQUILATERO"<<endl;
   if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b))
    cout<<"TRIANGULO ISOSCELES"<<endl;


   return 0;

}

