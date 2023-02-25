#include <iostream>
using namespace std;
class point
{
private:
    int x;
    int y;

public:
    point(int x, int y) : x(x), y(y) {}
    ~point() {}
    point &operator++()
    {
        x++;
        y++;
        return *this; //当前对象返回
    }
    point operator++(int)
    {
        point a = *this;
        ++*this;
        return a;
    }
    point &operator--()
    {
        x--;
        y--;
        return *this;
    }
    point operator--(int)
    {
        point a = *this;
        ++*this;
        return a;
    }
    friend ostream &operator<<(ostream &o, const point &p);//注意这里的const，因为后置的++返会的是右值，所以要加const修饰才行，否则会报错
};
ostream &operator<<(ostream &o, const point &p)
{
    o << '(' << p.x << "," << p.y << ')';
    return o;
}
int main()
{
    point p(1, 2);
    cout << p << endl;
    cout << p++ << endl;
    cout << ++p << endl;
    cout << p-- << endl;
    cout << --p << endl;
    return 0;
}