#include <iostream>
using namespace std;
enum Game
{
    Win,
    Lose,
    Tie,
    Cancle
};
int main()
{
    Game result;
    int i, j;
    cout << "please enter the score" << endl;
    cin >> i;
    if (i == 1)
        j = 0;
    if (i == 0)
        j = 2;
    if (i < 0)
        j = 1;
    if (i > 1)
        j = 3;
    result = Game(j);
    switch (result)
    {
    case 0:
        cout << "Win" << endl;
        break;
    case 1:
        cout << "Lose" << endl;
        break;
    case 2:
        cout << "Tie" << endl;
        break;
    case 3:
        cout << "Cancle" << endl;
        break;
    }
}