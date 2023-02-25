//动态分配与释放内存
//new+对象所返回的是对象的首地址
#include<iostream>
using namespace std;
class point
{
    private:
    int x,y;
    public:
    point():x(0),y(0)
    {
        cout<<"default constryctor called"<<endl;
    }
    point(int x,int y):x(x),y(y)
    {
        cout<<"constructor called"<<endl;
    }
    ~point()
    {
        cout<<"destructor called"<<endl;
    }
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
    void move(int newx,int newy)
    {
        x=newx;
        y=newy;
    }
};
int main()
{
    cout<<"step one"<<endl;
    point *ptr1=new point;//这里就是创建了一个对象，然后把它的首地址赋给了ptr1，也就类似于有一个a，&a=ptr1
    delete ptr1;
    cout<<"step two"<<endl;
    ptr1=new point(1,2);
    delete ptr1;
    return 0;
}