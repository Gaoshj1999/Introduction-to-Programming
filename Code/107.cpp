#include <iostream>
using namespace std;
class intnum
{
private:
    int *xptr;

public:
    intnum(int x = 0) : xptr(new int(x))
    {
        cout << "calling constructor" << endl;
    }
    intnum(const intnum &n) : xptr(new int(*n.xptr)) //这个是绑定左值的
    {
        cout << "calling copy constructor..." << endl;
    }
    intnum(intnum &&n):xptr(n.xptr)//移动构造函数//这里直接传指针其实是浅层复制
    //注：&&是右值引用；函数返回的临时变量是右值
    {
        n.xptr=nullptr;//为什么浅层复制没有问题，因为立马把原指针赋值为空指针，而空指针在析构时不会发生任何事情
        cout<<"calling move constructor..."<<endl;
    }
    ~intnum()
    {
        delete xptr;
        cout << "destructing..." << endl;
    }
    int getint() const
    {
        return *xptr;
    }
};
intnum getnum()
{
    intnum a;
    return a; //因为这是局部变量，无法返回，但是这里要返回，则计算机会自动复制构造一个无名对象用于返回，a则会被释放
}
int main()
{
    cout << getnum().getint() << endl;
    return 0;
}