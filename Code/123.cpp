//虚基类解决二义性问题
#include<iostream>
using namespace std;
class base0
{
    public:
    int var0;
    void fun0()
    {
        cout<<"member of base0"<<endl;
    }
};
class base1: virtual public base0{
    public:
    int var1;
};
class base2: virtual public base0{
    public:
    int var2;
};
class derived:public base1,public base2
{
    public:
    int var;
    void fun()
    {
        cout<<"member of derived"<<endl;
    }
};
//一般继承只要给直接基类的构造函数传递参数
//但是虚基类除此以外还要给最顶上的基类传递参数，就是为虚基类的构造函数传递参数，每次都要，尽管每层都传递了参数，但是实际上最远派生类的构造函数运行时只有它调用了虚基类的构造函数，中间的都忽略了