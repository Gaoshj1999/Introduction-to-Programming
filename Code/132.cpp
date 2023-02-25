//抽象类(带有纯虚函数的类叫抽象类),因为他还有些东西没有实现，所以不能定义对象，
//虚函数
#include <iostream>
using namespace std;
class base1
{
public:
    virtual void display() const=0;//纯虚函数  
};
void base1::display() const
{
    cout << "base1::display()" << endl;
}
class base2 : public base1
{
public:
    virtual void display() const;//覆盖基类的虚函数，实现了display函数，不再是抽象类了
};
void base2::display() const
{
    cout << "base2::display()" << endl;
}
class derived : public base2
{
public:
    virtual void display() const;
};
void derived::display() const
{
    cout << "derived::display()" << endl;
}
void fun(base1 *ptr)//仍然可以定义形参的类型为base1的指针，被允许是因为比如可以指向派生类的对象//注意这里base1是返回类型，不影响指向的对象及其地址
//如果参数是基类的指针，实参就可以是派生类的地址
{
    ptr->display(); //期望每个对象能调用自己相应的函数
}
int main()
{
    //base1 b1;就不被允许了
    base2 b2;
    derived de;
    fun(&b2); //用base2对象的指针调用fun函数
    fun(&de); //用derived对象的指针调用fun函数
    return 0;
}
