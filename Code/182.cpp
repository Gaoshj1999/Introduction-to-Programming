#include <iostream>
#include <string>
using namespace std;
class myexception
{
private:
    string message;

public:
    myexception(const string &message) : message(message) {}
    ~myexception() {}
    const string &getmessage() const
    {
        return message;
    }
};
class demo
{
public:
    demo()
    {
        cout << "constructor of demo" << endl;
    }
    ~demo()
    {
        cout << "destructor of demo" << endl;
    }
};
void func() throw()//原先是填exception，这里面还是能填抛出的变量类型，但是如果填了实际上程序虽然会报错但是仍然能够运行，然后错误信息显示c++11标准不赞成动态异常规划
{
    demo d;
    cout << "throw myexpection in fuc()" << endl;
    throw myexception("exception thrown by func()");
}
int main()
{
    cout << "in main function" << endl;
    try
    {
        func();
    }
    catch (myexception &e)
    {
        cout << "caught an exception" << e.getmessage() << endl;
    }
    cout << "resume the execution of main()" << endl;
    return 0;
}