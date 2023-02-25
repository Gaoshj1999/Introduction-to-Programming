#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "please input a sequence" << endl;
    for (i = 1; i != 0; i++)
    {
        cin >> n;
        cout << n << endl;
        if (n == 0)
            break;
    }
}