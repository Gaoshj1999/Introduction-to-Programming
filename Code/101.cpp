#include <iostream>
#include <cassert>
using namespace std;
class point
{
private:
    int x, y;

public:
    point() : x(0), y(0)
    {
        cout << "default constryctor called" << endl;
    }
    point(int x, int y) : x(x), y(y)
    {
        cout << "constructor called" << endl;
    }
    ~point()
    {
        cout << "destructor called" << endl;
    }
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
    void move(int newx, int newy)
    {
        x = newx;
        y = newy;
    }
};
class arrayofpoints
{
private:
    point *points; //指向动态数组首地址
    int size;      //数组大小
public:
    arrayofpoints(int size) : size(size)
    {
        points = new point[size];
    }
    ~arrayofpoints()
    {
        cout << "deleting..." << endl;
        delete[] points;
    }
    point &element(int index) //自定义的类，不能直接用数组下标运算//这是一个取数组元素的函数
    //这里的返回值类型是一个引用类型，因为我们需要的返回的值是左值，比如a[3]=b[4],我们希望返回的是a[3]
    //可以看65行，因为我们希望它返回后是一个数组元素而不是拷贝出来的副本，要真正访问在points内部封装的数组里面的元素，就是需要双向传递的
    {
        assert(index >= 0 && index < size);
        return points[index];
    }
};
int main()
{
    int count;
    cout << "please enter the count of points" << endl;
    cin >> count;
    arrayofpoints points(count);
    points.element(0).move(5, 0); //这是一个取数组元素的函数
    points.element(1).move(15, 20);
    return 0;
}
