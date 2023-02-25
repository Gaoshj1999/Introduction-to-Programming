//虚基类构造函数举例
#include <iostream>
using namespace std;
class base0
{
public:
    base0(int var) : var0(var) {}
    int var0;
    void fun0()
    {
        cout << "member of base0" << endl;
    }
};
class base1 : virtual public base0
{
public:
    base1(int var) : base0(var) {}
    int var1;
};
class base2 : virtual public base0
{
public:
    base2(int var) : base0(var) {}
    int var2;
};
class dervied : public base1, public base2
{
public:
    dervied(int var) : base0(var), base1(var), base2(var) {} //构造函数运行的时候，这里的base0调用了虚基类的构造函数，其余都忽略了
    void fun()
    {
        cout << "member of derived" << endl;
    }
};
int main()
{
    dervied d(1);
    d.var0 = 2;
    d.fun0();
    return 0;
}