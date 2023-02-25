#include<iostream>
using namespace std;
class A
{
    friend class B;
    private:
    int x;
    public:
    void display()
    {
        cout<<x<<endl;
    }
};
class B
{
    private:
    A a;//B的这个成员a是A的对象，一般来说是没有办法访问a中的私有成员的，但是因为B是A的友元类所以能够访问它私有的成员变量
    int i;//但是B是A的友元类不代表A是B的友元类，这是单向的关系
    public:
    void set()
    {
        i=a.x;
    }
};