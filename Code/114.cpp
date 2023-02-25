//7章，继承与派生相关问题,公有继承
#include <iostream>
using namespace std;
class point
{
private:
    float x, y;

public:
    void initpoint(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void move(float offx, float offy)
    {
        x += offx;
        y += offy;
    }
    float getx() const
    {
        return x;
    }
    float gety() const
    {
        return y;
    }
};
class rectangle : public point
{
private:
    float w, h;

public:
    void initrectangle(float x, float y, float w,float h)//初始化函数,但是不会自动调用
    {
        initpoint(x, y);
        this->w = w;//代表本类的w,如果不加this就会局部变量赋值给局部变量，当然如果形参定义为float t，然后改为w=t；也能达到同样效果
        this->h = h;
    }
    float getw() const
    {
        return w;
    }
    float geth() const
    {
        return h;
    }
};
int main()
{
    rectangle rect;
    rect.initrectangle(2, 3, 20, 10); //设定矩形的数据
    rect.move(3, 2);                  //移动矩形位置
    cout << "the data of rect(x,y,w,h):" << endl;
    cout << rect.getx() << "," << rect.gety() << ","
         << rect.getw() << "," << rect.geth() << endl;
    return 0;
}