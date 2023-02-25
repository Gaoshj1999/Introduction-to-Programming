#include <iostream>
using namespace std;
class baseclass
{
public:
    int number;
    int getnumber() const
    {
        return number;
    }
    baseclass()
    {
        cout << "construct baseclass" << endl;
    }
    ~baseclass()
    {
        cout << "destruct baseclass" << endl;
    }
};
class derivedclass : baseclass
//默认继承方式是public
{
public:
    derivedclass()
    {
        number = 0;
        number++;
        cout << "derivedclass construction.number=" << getnumber() << endl;
    }
    ~derivedclass()
    {
        number--;
        cout << "derivedclass destruction.number=" << getnumber() << endl;
    }
};
int main()
{
    derivedclass d;
    return 0;
}