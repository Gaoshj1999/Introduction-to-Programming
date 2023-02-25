#include<iostream>
using namespace std;
class B
{
    private:
    int b;
    public:
    B();
    B(int i);
    ~B();
    void print() const
    {
        cout<<b<<endl;
    }
};
B::B()
{
    b=0;
    cout<<"B's default constructor called"<<endl;
}
B::B(int i)
{
    b=i;
    cout<<"B's constructor called"<<endl;
}
B::~B()
{
    cout<<"B's destructor called"<<endl;
}
class C:public B
{
    private:
    int c;
    public:
    C();
    C(int i,int j);
    ~C();
    void print() const
    {
        cout<<c<<endl;
    }
};
C::C()
{
    c=0;
    cout<<"C's default constructor called"<<endl;
}
C::C(int i,int j):B(i),c(j)//给B类的构造函数传递参数
{
    cout<<"C's constructor called"<<endl;
}
C::~C()
{
    cout<<"C's destructor called"<<endl;
}
int main()
{
    C obj(5,6);
    obj.print();
    return 0;
}