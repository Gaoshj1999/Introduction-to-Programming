//移动构造，并没有发生复制，本例为使用深层构造函数复制，移动构造函数同例见107，如果不需要复制，则移动构造函数的效率要高些
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
    intnum(const intnum &n) : xptr(new int(*n.xptr)) //深层复制
    {
        cout << "calling copy constructor..." << endl;
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