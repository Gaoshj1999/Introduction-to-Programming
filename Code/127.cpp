#include <iostream>
using namespace std;
class vehicle
{
public:
    int maxspeed;
    float weight;

    vehicle(int ms, float w) : maxspeed(ms), weight(w) {}
    vehicle() {}
    void run()
    {
        cout << "vehicle runs" << endl;
    }
    void stop()
    {
        cout << "vehicle stops" << endl;
    }
};
class bicycle : virtual public vehicle
{
public:
    float height;
    bicycle(int m, float w, float h) : vehicle(m, w), height(h) {} //基类的构造函数就跟普通函数一样按照定义个变量个数传递参数
    bicycle() {}
};
class motorcar : virtual public vehicle
{
public:
    int seatnum;
    motorcar(int m, float w, int s) : vehicle(m, w), seatnum(s) {}
    motorcar() {}
};
class motorcycle : public bicycle, public motorcar
{
public:
    motorcycle(int m, float w, float h, int s) : vehicle(m, w), bicycle(m, w, h), motorcar(m, w, s) {} //即便实际是不会调用中间类的，但是还是要传参数
    motorcycle() {}
};
int main()
{
    motorcycle m;
    m.height = 1;
    m.seatnum = 2;
    m.weight = 100;
    m.maxspeed = 60;
    m.run();
    m.stop();
    return 0;
}
