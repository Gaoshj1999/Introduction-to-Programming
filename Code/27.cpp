//枚举型
#include <iostream>
#include <cstdlib>
using namespace std;
enum Game
{
    Win,
    Lose,
    Playing
};
int main()
{
    int sum, mypoint;
    Game status;
    unsigned seed;
    int rolldice();
    cout << "please enter an unsigned integer:" << endl;
    cin >> seed;
    srand(seed);
    sum = rolldice();
    switch (sum)
    {
    case7:
    case11:
        cout << "you win" << endl;
        break;
    case2:
    case3:
    case12:
        cout << "you lose" << endl;
        break;
    default:
        int point;
        point = sum;
        sum = rolldice();
        cout << "point=" << point << endl;
        cout << "sum=" << sum << endl;
        while (true)
        {
            if (sum == 7)
            {
                cout << "you lose" << endl;
                break;
            }
            else if (point == sum)
            {
                cout << "you win" << endl;
                break;
            }
            else
            {
                point = sum;
                sum = rolldice();
                cout << "point=" << point << endl;
                cout << "sum=" << sum << endl;
            }
        }
        break;
    }
    return 0;
}
int rolldice()
{
    int dice1, dice2, sum = 0;
    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;
    sum = dice1 + dice2;
    cout<<dice1<<"+"<<dice2<<"="<<sum<<endl;
    return sum;
}