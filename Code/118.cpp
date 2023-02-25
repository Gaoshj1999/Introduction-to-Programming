//既有继承又有组合的例子
#include <iostream>
using namespace std;
class base1
{
public:
    base1(int i)
    {
        cout << "constructing base1" << i << endl;
    }
};
class base2
{
public:
    base2(int i)
    {
        cout << "constructing base2" << i << endl;
    }
};
class base3
{
public:
    base3()
    {
        cout << "constructing base3" << endl;
    }
};
class derived : public base2, public base1, public base3
{
private:
    base1 member1;
    base2 member2;
    base3 member3;

public:
    derived(int a, int b, int c, int d) : base1(a), member2(d), member1(c), base2(b) {} //这里只是初始化列表，实际执行调用构造函数的时候不是按照这个次序，而是按照
    //首先基类继承的顺序，其次是派生类私有成员声明的顺序//所以一般就按照调用顺序声明，其实不按照也无所谓
};
int main()
{
    derived obj(1, 2, 3, 4);
    return 0;
}