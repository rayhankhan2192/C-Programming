#include<bits/stdc++.h>
using namespace std;
int main()
{
  int start, endd, min1, min2;
  int tim;
  cin>>start>>min1>>endd>>min2;
  tim = ((endd*60)+min2) - ((start*60)+min1);
  if(tim<=0) tim += 24*60;
  cout<<"O JOGO DUROU "<<tim/60<<" HORA(S) E "<<tim%60<<" MINUTO(S)"<<endl;
   return 0;

}

