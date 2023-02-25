#include <iostream>
using namespace std;
//构造函数和析构函数都是默认存在的，这是语法规定的，当定义类的时候没有自定义，则程序会自动生成该函数
class Point
{
public:
    Point(int xx, int yy);
    ~Point();//析构函数

private:
    int x, y;
};
Point::Point(int xx,int yy):x(xx),y(yy){}
/*
这里等于
Point::Point(int xx,int yy)
{
    x=xx;
    y=yy;
} 
*/
Point::~Point(){}
int main()
{
}