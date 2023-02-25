#include <iostream>
using namespace std;
enum cpu_rank
{
    p1 = 1,
    p2,
    p3,
    p4,
    p5,
    p6,
    p7
};
class cpu
{
private:
    cpu_rank rank;
    int frequency;
    float voltage;

public:
    cpu(cpu_rank r, int f, float v)
    {
        rank = r;
        frequency = f;
        voltage = v;
        cout<<"构造了一个函数"<<endl;
    }
    ~cpu()
    {
        cout<<"析构了一个函数"<<endl;//析构函数和构造函数自己声明的话都要有具体的声明，即有函数体，不能只有~cpu()这样
        //至少有~cpu(){}，类函数就和函数要求是一样的
    }
    cpu_rank getrank() const
    {
        return rank;
    }
    int getfrenquency() const //将成员函数设置为const则说明不允许通过函数修改该类的数据成员
    {
        return frequency;
    }
    float getvoltage() const
    {
        return voltage;
    }
    void setrank(cpu_rank r)
    {
        rank = r;
    }
    void setfrenquency(int f)
    {
        frequency = f;
    }
    void setvoltage(float v)
    {
        voltage = v;
    }
    void run()
    {
        cout << "cpu开始运行" << endl;
    }
    void stop()
    {
        cout << "cpu停止运行" << endl;
    }
};
int main()
{
    cpu a(p6, 300, 2.8);
    a.run();
    a.stop();
    return 0;
}