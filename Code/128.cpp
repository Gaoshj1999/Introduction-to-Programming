//多态性与重载运算符
//如何将运算符重载为类的成员函数
//双目运算符重载为成员函数
//将运算符重载为类的成员函数的时候要求左操作数必须是这个类的对象
#include <iostream>
using namespace std;
class complex
{
private:
    double real;
    double imag;

public:
    complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    complex operator+(const complex &c2) const; //const加在函数后表示不能修改class的成员，某种程度上和加在内部有相同作用，加在括号内是防止形参在函数内被改变，因此这只对指针和引用有意义
    complex operator-(const complex &c2) const;
    void display() const;
};
complex complex::operator+(const complex &c2) const
{
    return complex(real + c2.real, imag + c2.imag); //构造了一个临时无名对象返回给了调用者
}
complex complex::operator-(const complex &c2) const 
//在类内部的成员函数中，哪怕是传入的对象，也是可以直接访问该对象的私有成员。（前提是该对象必须是本类型的一个对象）
{
    return complex(real - c2.real, imag - c2.imag);
}
void complex::display() const
{
    cout << "(" << real << "," << imag << ")" << endl;
}
int main()
{
    complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=";
    c1.display();
    cout << "c2=";
    c2.display();
    c3 = c1 - c2;
    cout << "c3=c1-c2=";
    c3.display();
    c3 = c1 + c2;
    cout << "c3=c1+c2=";
    c3.display();
    return 0;
}
