//浅层复制与深层复制
//有指针的情况向就无法正常运行了，此时就需要深层复制，这是为了解决地址内容重复删除的问题
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
    arrayofpoints(const arrayofpoints &v);
    point &element(int index)
    {
        assert(index >= 0 && index < size);
        return points[index];
    }
};
arrayofpoints::arrayofpoints(const arrayofpoints &v) //为了解决浅层复制不行的问题，这里自己定义了一个复制构造函数
{
    size = v.size;            //参数的值可以直接复制过来
    points = new point[size]; //指针不能直接复制过来，而是新建了一个同样大小的动态数组//即指向新的地址
    for (int i = 0; i < size; i++)
    {
        points[i] = v.points[i];
    }
}
int main()
{
    int count;
    cout << "please enter the count of points" << endl;
    cin >> count;
    arrayofpoints pointsarray1(count);  //创建对象数组
    pointsarray1.element(0).move(5, 0); //这是一个取数组元素的函数
    pointsarray1.element(1).move(15, 20);
    arrayofpoints pointsarray2(pointsarray1); //创建副本
    cout << "copy of pointsarray1：" << endl;
    cout << "point_0 of array2:" << pointsarray2.element(0).getx() << "," << pointsarray2.element(0).gety() << endl;
    cout << "point_1 of array2:" << pointsarray2.element(1).getx() << "," << pointsarray2.element(1).gety() << endl;
    pointsarray1.element(0).move(25, 30);
    pointsarray1.element(1).move(35, 40);
    cout << "after the moving of pointsarray1:" << endl;
    cout << "point_0 of array2:" << pointsarray2.element(0).getx() << "," << pointsarray2.element(0).gety() << endl;
    cout << "point_1 of array2:" << pointsarray2.element(1).getx() << "," << pointsarray2.element(1).gety() << endl;
    return 0;
}