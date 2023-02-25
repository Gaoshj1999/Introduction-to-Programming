#include <iostream>
using namespace std;
class comeitf
{
public:
    virtual ~comeitf() {}
    virtual int read() = 0;
    virtual int write() = 0;
};
class ser : public comeitf
{
public:
    virtual ~ser() {}
    virtual int read()
    {
        cout << "ser read" << endl;
    }
    virtual int write()
    {
        cout << "ser write" << endl;
    }
};
class net : public comeitf
{
public:
    virtual ~net() {}
    virtual int read();
    int get()
    {
        cout << "net read" << endl;
    }
    virtual int write()
    {
        cout << "net write" << endl;
    }
};
int main()
{
    comeitf *cm;
    cm = new ser();
    cm->read();
    delete cm;
    cm = new net();
    cm->read();
    delete cm;
    return 0;
}