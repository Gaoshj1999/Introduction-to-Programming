//练习2:汉诺塔
#include <iostream>
using namespace std;
void move(char a, char c)
{
    cout << a << "-->" << c << endl;
}
void hano(int n, char a, char b, char c)
{
    if (n == 1)
    {
        move(a, c);
    }
    else
    {
        hano(n - 1, a, c, b);
        move(a, c);
        hano(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    cout << "请输入层数" << endl;
    cin >> n;
    hano(n, a, b, c);
    return 0;
}