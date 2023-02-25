#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;
#define D(a)         \
    T << #a << endl; \
    a
ofstream T("output.out");
int main()
{
    D(int i = 53;)
    D(float f = 4700113.141593;)
    char *s = "is there any more?";
    D(T.setf(ios::unitbuf);)
    D(T.setf(ios::showbase);)
    D(T.setf(ios::showpos);)
    D(T << i << endl;)
    D(T.setf(ios::basefield);)
    D(T << i << endl;)
    D(T.unsetf(ios::uppercase);)
    D(T.setf(ios::oct, ios::basefield);)
    D(T << i << endl;)
    D(T.unsetf(ios::showbase);)
    D(T.setf(ios::dec, ios::basefield);)
    D(T.setf(ios::left, ios::adjustfield);)
    D(T.fill('0');)
    return 0;
}