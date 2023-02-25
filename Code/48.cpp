/*   #include <iostream>
using namespace std;
class Point
{
public:
    Point(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

private:
    int x, y;
};
Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
    cout << "Calling the coy constructot" << endl;
}
void fun1(Point p)
{
    cout << p.getx() << endl;
}
Point fun2()
{
    Point a;
    return a;
}
int main()
{
    Point a;    //复制构造函数的三种使用情况
    Point b(a); //情况一，用a初始化b。第一次使用拷贝（复制）构造函数
    cout << b.getx() << endl;
    fun1(b);    //情况二，对象b作为fun1的实参，在初始化形参时第二次使用拷贝构造函数
    b = fun2(); //情况三，局部变量无法给到调用者，因此中间建立了一个无名对象，再把值返回给了b
    cout << b.getx() << endl;
    return 0;
}
   */