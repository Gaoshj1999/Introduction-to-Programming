#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    cout << "please enter a number\n";
    cin >> i;
    while (i >= 0)
    {
        sum += i;
        i--;
    }
    cout << "the sum is: \n"
         << sum;
    return 0;
}
