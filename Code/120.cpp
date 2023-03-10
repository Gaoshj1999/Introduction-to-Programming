//派生类析构函数的例子
#include <iostream>
using namespace std;
class base1
{
public:
    base1(int i)
    {
        cout << "constructing base1" << i << endl;
    }
    ~base1()
    {
        cout << "destructing base1" << endl;
    }
};
class base2
{
public:
    base2(int i)
    {
        cout << "constructing base2" << i << endl;
    }
    ~base2()
    {
        cout << "destructing base2" << endl;
    }
};
class base3
{
public:
    base3()
    {
        cout << "constructing base3" << endl;
    }
    ~base3()
    {
        cout << "destructing base3" << endl;
    }
};
class derived : public base2, public base1, public base3
{
private:
    base1 member1;
    base2 member2;
    base3 member3;

public:
    derived(int a, int b, int c, int d) : base1(a), member2(d), member1(c), base2(b) {}
    ~derived()
    {
        cout << "destructing derived" << endl;
    }
};
int main()
{
    derived obj(1, 2, 3, 4);
    return 0;
}