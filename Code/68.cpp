#include<iostream>
using namespace std;
class point
{
    private:
    int x;
    int y;
    static int count;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
        count++;
    }
    ~point()
    {
        count--;
    }
    point(const point &a)
    {
        x=a.x;
        y=a.y;
        count++;
    }
    static void getcount()//静态函数成员，属于所有的类，静态成员函数的定义可以在类内给出/如果在类外给出的话因为不属于任何一个类，所以也不用挂
    {
        cout<<count<<endl;
    }
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
};
int point::count=0;
int main()
{
    point::getcount();//可以通过类名来调用函数，因为count是私有的所以不能直接调用它
    point p(4,5);
    cout<<"A:"<<"x="<<p.getx()<<" "<<"y="<<p.gety()<<endl;
    p.getcount();//因为是共有且public的，所以也可以通过对象来调用
    point::getcount();
    point b(p);
    cout<<"B:"<<"x="<<b.getx()<<" "<<"y="<<b.gety()<<endl;
    p.getcount();
    b.getcount();
    return 0;
}