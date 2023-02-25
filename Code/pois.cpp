#include <iostream>
#include <cmath>
using namespace std;
double jieceng(int n);
int main()
{
    double result;
    int i;
    for (i = 0; i <= 431; i++)
    {
        result += (pow(416, i) / jieceng(i)) * pow(2.71828, -416);
    }
    cout << result;
    return 0;
}
double jieceng(int n)
{
    int result = 1;
    if (n == 0)
    {
        return result;
    }
    else
    {
        while (n != 0)
        {
            result *= n;
            n--;
        }
        return result;
    }
}