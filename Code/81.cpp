#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point();
    point(int x, int y);
    ~point();
    void move(int newx, int newy);
    int getx() const
    {
        return x;
    }
    int gety() const
    {
        return y;
    }
    static void showcount();
};
point::point() : x(0), y(0)
{
    cout << "default constructor called." << endl;
}
point::point(int x, int y) : x(x), y(y)
{
    cout << "constructor called." << endl;
}
point::~point()
{
    cout << "destructor called." << endl;
}
void point::move(int newx, int newy)
{
    cout << "moving the point to(" << newx << "," << newy << ")" << endl;
    x = newx;
    y = newy;
}
int main()
{
    cout << "entering main" << endl;
    point a[2];
    for (int i = 0; i < 2; i++)
    {
        a[i].move(i + 10, i + 20);
    }
    cout << "exiting main" << endl;
    return 0;
}