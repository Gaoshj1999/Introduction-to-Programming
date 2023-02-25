#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
bool g(int x, int y)
{
    return x > y;
}
int main()
{
    int intarr[] = {30, 90, 10, 40, 70, 50, 20, 80};
    const int n = sizeof(intarr) / sizeof(int);
    vector<int> a(intarr, intarr + n);
    vector<int>::iterator p;
    p = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));
    if (p == a.end())
    {
        cout << "no element greater than 40" << endl;
    }
    else
    {
        {
            cout << "first element greater than 40 is:" << *p << endl;
        }
    }
    p=find_if(a.begin(),a.end(),not1(bind2nd(greater<int>(),15)));//bind2nd的作用是将g(x,y)化为g(x,40),变成了一个一元函数
    if (p == a.end())
    {
        cout << "no element greater than 15" << endl;
    }
    else
    {
        {
            cout << "first element greater than 15 is:" << *p << endl;
        }
    }
    p=find_if(a.begin(),a.end(),not2(bind2nd(greater<int>(),15)));
    if (p == a.end())
    {
        cout << "no element greater than 15" << endl;
    }
    else
    {
        {
            cout << "first element greater than 15 is:" << *p << endl;
        }
    }
    return 0;
}