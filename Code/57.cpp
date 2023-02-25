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
        cout << "构造了一个cpu" << endl;
    }
    ~cpu()
    {
        cout << "析构了一个cpu" << endl; //析构函数和构造函数自己声明的话都要有具体的声明，即有函数体，不能只有~cpu()这样
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
enum ramtype
{
    DDR2 = 2,
    DDR3,
    DDR4,
};
class ram
{
private:
    int size;
    ramtype type;
    int frenquency;

public:
    ram(int s, ramtype t, int f);
    ~ram()
    {
        cout << "析构了一个ram" << endl;
    }
    void setsize(int s);
    void settype(ramtype t);
    void setfrequency(int f);
    int getsize() const;
    ramtype gettype() const;
    int getfrequency() const;
    void run()
    {
        cout << "ram开始运行" << endl;
    }
    void stop()
    {
        cout << "ram停止运行" << endl;
    }
};
ram::ram(int s, ramtype t, int f) : size(s), type(t), frenquency(f)
{
    cout << "构造了一个ram" << endl;
}
void ram::setsize(int s)
{
    size = s;
}
void ram::settype(ramtype t)
{
    type = t;
}
void ram::setfrequency(int f)
{
    frenquency = f;
}
int ram::getsize() const
{
    return size;
}
ramtype ram::gettype() const
{
    return type;
}
int ram::getfrequency() const
{
    return frenquency;
}
enum port_cdrom
{
    SATA,
    USB
};
enum install_cdrom
{
    external,
    builtin
};
class cdrom
{
private:
    port_cdrom port;
    int capacity;
    install_cdrom install;

public:
    cdrom(port_cdrom p, int c, install_cdrom i);
    ~cdrom()
    {
        cout << "析构了一个cdrom" << endl;
    }
    void setport(port_cdrom p);
    void setcapacity(int c);
    void setinstall(install_cdrom i);
    port_cdrom getport() const;
    int getcapacity() const;
    install_cdrom getinstall() const;
    void run()
    {
        cout << "cdrom开始运行" << endl;
    }
    void stop()
    {
        cout << "cdrom停止运行" << endl;
    }
};
cdrom::cdrom(port_cdrom p, int c, install_cdrom i) : port(p), capacity(c), install(i)
{
    cout << "构造了一个cdrom" << endl;
}
void cdrom::setport(port_cdrom p)
{
    port = p;
}
void cdrom::setcapacity(int c)
{
    capacity = c;
}
void cdrom::setinstall(install_cdrom i)
{
    install = i;
}
port_cdrom cdrom::getport() const
{
    return port;
}

int cdrom::getcapacity() const
{
    return capacity;
}

install_cdrom cdrom::getinstall() const
{
    return install;
}
class computer
{
private:
    cpu cpu1;
    ram ram1;
    cdrom cdrom1;
    int storage_size;
    int bandwidth;

public:
    computer(cpu c, ram r, cdrom cd, int s, int b);
    ~computer()
    {
        cout << "析构了一个computer" << endl;
    }
    void run()
    {
        cpu1.run();
        ram1.run();
        cdrom1.run();
        cout << "computer开始运行" << endl;
    }
    void stop()
    {
        cpu1.stop();
        ram1.stop();
        cdrom1.stop();
        cout << "computer停止运行" << endl;
    }
};
computer::computer(cpu c, ram r, cdrom cd, int s, int b) : cpu1(c), ram1(r), cdrom1(cd),storage_size(s),bandwidth(b)//不知为啥包含类的类的构造函数要在函数外声明
//结果可以看出执行的顺序就构造而言是按定义的先后执行，且构造完内部的类最后构造总的类
//析构是相反的，最后构造的类最先析构，然后按照后先顺序执行，对总类也是先析构然后才是内部的类
//我们看到析构的次数要比构造的次数多是因为本程序没有定义复制构造函数，因此在这一步操作时
//第一个形实结合时调用了复制构造函数
//第二词是在初始化的时候调用了复制构造函数
//而默认的复制构造函数没有定义输出语句，所以少了
{
    cout << "构造了一个computer" << endl;
}
int main()
{
    cpu a(p6, 300, 2.8);
    a.run();
    a.stop();
    cout << "*******************\n"
         << endl;
    ram b(1600, DDR3, 8);
    b.run();
    b.stop();
    cout << "*******************\n"
         << endl;
    cdrom c(SATA, 2, builtin);
    c.run();
    c.stop();
    cout << "*******************\n"
         << endl;
    computer my_computer(a, b, c, 12, 10);
    cout << "*******************\n"
         << endl;
    my_computer.run();
    my_computer.stop();
    cout << "*******************\n"
         << endl;
    return 0;
}
