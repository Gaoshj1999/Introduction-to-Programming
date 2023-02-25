#include <iostream>
using namespace std;
int pow(int a, int n);
int main()
{
    int value = 0;
    cout << "enter an 8 bit binary number" << endl;
    for (int i = 7; i >= 0; i--)
    {
        char ch;
        cin >> ch;
        if (ch == '1')
            value += pow(2, i);
    }
    cout << "the number is:" << value << endl;
    return 0;
}
int pow(int a, int n)
{
    int result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result *= a;
    }
    return result;
}