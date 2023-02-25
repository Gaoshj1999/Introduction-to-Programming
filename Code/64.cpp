#include <iostream>
using namespace std;
int change(int a, int b, int c);
int main()
{
    int a, b, c;
    cout << "please enter 3 number" << endl;
    cin >> a >> b >> c;
    cout << change(a, b, c);
    return 0;
}
int change(int a, int b, int c)
{
    int t;
    t = a > b ? a : b;
    t = t > c ? t : c;
    return t;
}
