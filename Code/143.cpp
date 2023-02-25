#include <iostream>
using namespace std;
class net
{
public:
    virtual ~net() {}
    virtual int get(int *a) = 0;
};
class netcome
{
public:
    net *s;
    int a[10];
    void run()
    {
        s->get(&a[0]);
    }
};
class app : public net
{
public:
    netcome ne;
    app()
    {
        ne.s = (net *)this;
    }
    virtual ~app() {}
    virtual int get(int *a)
    {
        cout << "get" << endl;
        return 0;
    }
};
int main()
{
    app a;
    a.ne.run();
    return 0;
}
