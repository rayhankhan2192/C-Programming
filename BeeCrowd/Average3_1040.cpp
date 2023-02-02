#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,avg=0;
    cin>>a>>b>>c>>d;
    avg = (a*2+b*3+c*4+d)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
    if(avg>=7.0) cout<<"Aluno aprovado."<<endl;
    else if(avg>=5.0)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>e;
        cout<<"Nota do exame: "<<e<<endl;
        double av = (avg+e)/2.0;
        if(av>5.00) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;
        cout<<fixed<<setprecision(1)<<"Media final: "<<av<<endl;
    }
    else
    {
        cout<<"Aluno reprovado."<<endl;
    }
    return 0;
}

