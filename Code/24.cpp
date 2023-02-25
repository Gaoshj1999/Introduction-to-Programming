#include <iostream>
using namespace std;
bool symmetry(unsigned n);
int main()
{
    for (int m = 11; m <= 999;m++)
    {
        if (symmetry(m) && symmetry(m * m) && symmetry(m * m * m))
            cout << m << endl;
    }
    return 0;
}
bool symmetry(unsigned n)
{
    unsigned i=n;
    unsigned m=0;
    while (i!=0)
    {
        m = m * 10 + i % 10;
        i /= 10;
    }
    return m == n;
}