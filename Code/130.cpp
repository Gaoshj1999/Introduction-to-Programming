//运算符重载为非成员函数，左操作数不是类的成员对象,或者这个类是系统定义的，我们没法自行增加运算符重载函数
//cout是类库中的输出流对象，因此<<运算符只能在类外重载
#include <iostream>
using namespace std;
class complex
{
private:
    double real;
    double imag;

public:
    complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend complex operator+(const complex &c1, const complex &c2);
    friend complex operator-(const complex &c1, const complex &c2);
    friend ostream &operator<<(ostream &out, const complex &c);
};
complex operator+(const complex &c1, const complex &c2)
{
    return complex(c1.real + c2.real, c1.imag + c2.imag);
}
complex operator-(const complex &c1, const complex &c2)
{
    return complex(c1.real - c2.real, c1.imag - c2.imag);
}
ostream &operator<<(ostream &out, const complex &c) //ostream是输出流的对象，因为需要指定往那个输出流中插入//因为输出的还是输出流对象，所以可以实现连续
//注意这里的const，因为后置的++返会的是右值，所以要加const修饰才行，否则会报错
{
    out << "(" << c.real << "," << c.imag << ")";
    return out;
}
int main()
{
    complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;
    c3 = c1 - c2;
    cout << "c3=c1-c2=" << c3 << endl;
    c3 = c1 + c2;
    cout << "c3=c1+c2=" << c3 << endl;
    return 0;
}