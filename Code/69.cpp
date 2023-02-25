#include<iostream>
#include<cmath>
using namespace std;
class point
{
    private:
    float x;
    float y;
    public:
    point(float x,float y):x(x),y(y){}
    ~point(){}
    friend  float countdist(point &x1,point &x2);//不是类的成员函数,且这里引用是因为引用比起传值效率更高，但是有修改原数据的风险
};
float countdist(point &x1,point &x2)//这里没有标类名也可以看出来他不是类的成员函数
{
    float x=x1.x-x2.x;
    float y=x1.y-x2.y;
    return sqrt(x*x+y*y);
}
int main()
{
    point x1(4,5);
    point x2(5,6);
    cout<<"the distance is:"<<countdist(x1,x2)<<endl;
    return 0;
}