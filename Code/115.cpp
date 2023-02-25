//私有继承
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
class rectangle : private point
{
private:
    float w, h;

public:
    void initrectangle(float x, float y, float w,float h)
    {
        initpoint(x, y);
        this->w = w;
        this->h = h;
    }
    void move(float offx,float offy)
    {
        point::move(offx,offy);//加point是表示调用从基类继承过来的函数,在类体中是可以调用的
    }
    float getx() const
    {
        return point::getx();
    }
    float gety() const
    {
        return point::gety();
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