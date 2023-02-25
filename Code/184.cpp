#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;
class cexception
{
public:
    cexception() {}
    virtual ~cexception() {}
    void reason()
    {
        cout << "cexception" << endl;
    }
};
void fn1()
{
    throw cexception();
}
int main()
{
    try
    {
        fn1();
    }
    catch (cexception &ce)
    {
        ce.reason();
    }
    return 0;
}
