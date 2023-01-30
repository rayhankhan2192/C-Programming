/*https://codeforces.com/problemset/problem/734/A*/\
#include <iostream>
using namespace std;
int main()
{
    int n, Anton = 0, Danik = 0;
    string name;
    cin>>n>>name;
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if (Anton > Danik)
    {
        cout << "Anton"<<endl;
    }
    else if (Anton == Danik)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
}
