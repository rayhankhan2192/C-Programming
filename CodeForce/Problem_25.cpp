#include <iostream>
using namespace std;
int main()
{
    int num, num2;
    cin >> num;

    while (true)
    {
        num++;
        int first = num / 1000;
        int senond = (num % 1000) / 100;
        int third = (num % 100) / 10;
        int forth = num % 10;
        if (first != senond && first != third && first != forth && senond != third && senond != forth && third != forth)
        {
            cout << first << senond << third << forth << endl;
            break;
        }
    }
}