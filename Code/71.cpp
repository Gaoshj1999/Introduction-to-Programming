#include<iostream>
using namespace std;
class R
{
    private:
    int r1,r2;
    public:
    R(int r1,int r2):r1(r1),r2(r2){}
    void print()
    {
        cout<<"not const"<<r1<<";"<<r2<<endl;
    }
    void print() const//定义常函数的时候const是加在后面//const也是重载形式之一
    {
        cout<<"const"<<r1<<";"<<r2<<endl;
    }
};
int main()
{
    R a(5,4);
    a.print();//这里优先调用的是没有const的函数，但是如果没有的话也会调用有const的
    const R b(20,52);//定义常对象的时候const是加在前面
    b.print();//常对象只能调用常函数，不能调用非常函数！！
    return 0;
}