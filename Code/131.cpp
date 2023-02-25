//虚函数
#include <iostream>
using namespace std;
class base1
{
public:
    virtual void display() const; //虚函数，告诉编译器，凡是你遇到对这样这个原型的函数的调用，你都不要在编译的时候马上做决定，先置后
    //告诉编译器不要在编译阶段做静态绑定，要等运行时做动态绑定
    //这个函数的实现(虚函数)就不能写在类体中作为内联函数了(为了效率无循环等的小函数计算机会自动转化为内联函数)
    //如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方
    //但是要求不在编译阶段而是在运行阶段再去决定display的调用，该执行哪个函数体
    //而内联函数是在编译阶段处理的，就要把它嵌入到程序代码中去，所以这两者显然矛盾了
    //但实际试验下来写函数体内也没问题，计算器其实没有把它默认为内联函数，但是有这个风险要稍微注意一下吧，记得的话就建议别写类体里
};
void base1::display() const
{
    cout << "base1::display()" << endl;
}
class base2 : public base1
{
public:
    virtual void display() const;//基类如果定义为虚函数，相同的函数在派生类中系统也会默认为虚函数，即使不加virtual，但是为了可读性还是加比较好
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
void fun(base1 *ptr) //参数为基类对象的指针//编译时无法确定指向什么类型
//如果参数是基类的指针，实参就可以是派生类的地址
{
    ptr->display(); //期望每个对象能调用自己相应的函数
}
int main()
{
    base1 b1;
    base2 b2;
    derived de;
    fun(&b1); //用base1对象的指针调用fun函数
    fun(&b2); //用base2对象的指针调用fun函数
    fun(&de); //用derived对象的指针调用fun函数
    return 0;
}
//注意想用基类的指针访问派生类的成员要用虚函数，看这个自定义的fun函数
//其实如果不定义函数，直接定义base1的指针效果是一样，因为这个函数只是实现了用指针调用函数，只是这样写看得清楚些
//需要用虚函数的理由在上面写了
//总的来说就是不定义函数用基类指针和引用访问派生类成员的内容要用虚函数