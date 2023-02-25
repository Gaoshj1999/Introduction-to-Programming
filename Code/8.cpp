#include <iostream>
using namespace std;
int main()
{
    float n = 1, sum = 0, i = 0;
    while (i <= 1000)
    {
        sum += sum + 1 / n;
        n = 1 / n;
        i++;
    }
    if (sum >= 2 - 1 / 100000)
    {
        cout << "the sequence is convergence" << endl;
        cout << sum << endl;
    }
    else
        cout << "the sequence isn't convergence";
    return 0;
}