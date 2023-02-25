#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Please input an number";
    cin >> a;
    do
    {
        c = a % 10;
        cout << c;
        a /= 10;
    } while (a != 0);
    return 0;
}