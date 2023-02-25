#include "headtry.h"
#include <iostream>
using namespace std;
int point::count = 0;
point::point(const point &a) : x(a.x), y(a.y)
{
    count++;
}
void point::showcount()
{
    cout << "count is" << count << endl;
}
