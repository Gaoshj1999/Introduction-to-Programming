//分配和释放动态数组，以往定义的时候数组的长度是固定的，但是动态数组可以长度不固定，且可让用户自行输入
#include <iostream>
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
int main()
{
    point *ptr = new point[2];
    ptr[0].move(5, 10);
    ptr[1].move(15, 20);
    cout << "deleting..." << endl;
    delete[] ptr; //删除整个数组对象，如果不加[]的话就只会删除首地址的对象
    return 0;
}