#include<bits/stdc++.h>
using namespace std;
int main()
{
  int start, endd;
  cin>>start>>endd;
  int times = 0;
  if(start>endd){
    times = 24-(start-endd);
    cout<<"O JOGO DUROU "<<times<<" HORA(S)" <<endl;
  }
  if(start<endd){
    times = endd - start;
    cout<<"O JOGO DUROU "<<times<<" HORA(S)" <<endl;
  }
  if(start == endd){
        times = 24;
        cout<<"O JOGO DUROU "<<times<<" HORA(S)" <<endl;
  }
   return 0;

}
