#include <iostream>
using namespace std;
int main()
{
    float money;
    int c;
    cout << "Please input how much you got \n";
    cin >> money;
    c = money / 10;
    switch (c)
    {
    case 0:
        cout << "you can't buy any thing";
        break;
    case 1:
        cout << "you can buy a sandwish";
        break;
    case 2:
        cout << "you can eat breakfast";
        break;
    case 3:

    case 4:

    case 5:

    case 6:
        cout << "oh you have enough money";
        break;
    case 7:
        cout << "you got too much money,give it to me!";
        break;

    default:
        cout << "are you kidding me?!";
        break;
    }
    return 0;
}