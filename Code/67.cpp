#include<iostream>
using namespace std;
class point
{
    private:
    int x;
    int y;
    static int count;//静态数据成员，属于所有的类，静态数据成员的声明在类内,但是不能在类内赋值，如果一定要赋值，则要加const
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
    void getcount()
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
int point::count=0;//静态数据成员的定义在类外进行时因为不特别属于一个类，所以可以不加抬头,只需要加上主类名就可以了
int main()
{
    point p(4,5);
    cout<<"A:"<<"x="<<p.getx()<<" "<<"y="<<p.gety()<<endl;
    p.getcount();
    point b(p);
    cout<<"B:"<<"x="<<b.getx()<<" "<<"y="<<b.gety()<<endl;
    p.getcount();
    b.getcount();
    return 0;
}