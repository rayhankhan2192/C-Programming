#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inter,gremio;
    int n;
    int count=0;
    int int_win=0;
    int grem_win=0;
    int empates=0;

    while(1){
        cin>>inter;
        cin>>gremio;
        if(inter==gremio)empates++;
        if(inter>gremio)int_win++;
        if(inter<gremio)grem_win++;
        count++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if(n==1) continue;
        if(n==2) break; 
    }
    cout<<count<<" grenais"<<endl;
    cout<<"Inter:"<<int_win<<endl;
    cout<<"Gremio:"<<grem_win<<endl;
    cout<<"Empates:"<<empates<<endl;
    if(int_win>grem_win)
       cout<<"Inter venceu mais"<<endl;
    if(int_win<grem_win)
       cout<<"Gremio venceu mais"<<endl;
    if(int_win == grem_win)
       cout<<"Não houve vencedor"<<endl;


return 0;
}