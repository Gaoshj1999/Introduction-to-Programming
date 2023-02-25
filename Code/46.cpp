#include <iostream>
using namespace std;
class clock
{
public:
    clock(int newh, int newm, int news)
    {
        hour = newh;
        minute = newm;
        second = news;//在这直接声明也可以
    }
    clock();
    void settime(int newh, int newm, int news);
    void showtime();

private:
    int hour, minute, second;
};
void clock::settime(int newh, int newm, int news)
{
    hour = newh;
    minute = newm;
    second = news;
}
void clock::showtime()
{
    cout << hour << ':' << minute << ':' << second;
}
clock::clock() : clock(0, 0, 0) {}
int main()
{
    clock c(8, 10, 0);
    clock c2;
    c.showtime();
    c2.showtime();
    return 0;
}