//类型转换规则举例
#include <iostream>
using namespace std;
class base1
{
public:
    void display() const
    {
        cout << "base1::display()" << endl;
    }
};
class base2 : public base1
{
public:
    void display() const
    {
        cout << "base2::display()" << endl;
    }
};
class derived : public base2
{
public:
    void display() const
    {
        cout << "derived::display()" << endl;
    }
};
void fun(base1 *ptr) //参数为基类对象的指针//编译时无法确定指向什么类型
//如果参数是基类的指针，实参就可以是派生类的地址
{
    ptr->display();//期望每个对象能调用自己相应的函数
}
int main()
{
    base1 b1;
    base2 b2;
    derived de;
    fun(&b1);//用base1对象的指针调用fun函数
    fun(&b2);//用base2对象的指针调用fun函数
    fun(&de);//用derived对象的指针调用fun函数
    return 0;
}
//结果是都调用了基类的display函数
//所以不要重新定义继承而来的非虚函数
//虚函数就不会产生这样的问题，在第八章
//无法成功的原因是，在编译阶段，编译器根据指针无法判断运行时它会指向什么类型的对象，所以只能说指针是什么类型的他就调用那个类
//解决办法是告诉编译器在编译阶段你没法决定，那么就推迟决定，留到运行时再确定，在运行时就能够知道指向什么类型了