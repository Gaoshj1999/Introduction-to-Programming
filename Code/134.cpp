#include <iostream>
using namespace std;
class vehicle
{
public:
    int maxspeed;
    int weight;
    virtual void stop();
    virtual void run();
};
void vehicle::run()
{
    cout << "vehicle runs" << endl;
}
void vehicle::stop()
{
    cout << "vehicle stops" << endl;
}
class bicycle : virtual public vehicle
{
public:
    void stop();
    void run();
};
void bicycle::run()
{
    cout << "bicycle runs" << endl;
}
void bicycle::stop()
{
    cout << "bicycle stops" << endl;
}
class motorcar : virtual public vehicle
{
public:
    void stop();
    void run();
};
void motorcar::run()
{
    cout << "motorcar runs" << endl;
}
void motorcar::stop()
{
    cout << "motorcar stops" << endl;
}
class motorcycle : public bicycle, public motorcar
{
public:
    void stop();
    void run();
};
void motorcycle::run()
{
    cout << "motorcycle runs" << endl;
}
void motorcycle::stop()
{
    cout << "motorcyclestops" << endl;
}
int main()
{
    vehicle v;
    v.run();
    v.stop();
    bicycle b;
    b.run();
    b.stop();
    motorcar m;
    m.run();
    m.stop();
    motorcycle mc;
    mc.run();
    mc.stop();
    vehicle *vp = &v;
    vp->run();
    vp->stop();
    vp = &b;
    vp->run();
    vp->stop();
    vp = &m;
    vp->run();
    vp->stop();
    vp = &mc;
    vp->run();
    vp->stop();
    return 0;
}