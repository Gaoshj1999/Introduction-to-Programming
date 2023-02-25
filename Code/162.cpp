//利用stl标准函数对象
#include <iostream>
#include <numeric>
#include <functional>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    const int n = sizeof(a) / sizeof(int);
    cout << "the result by multipling all elements in a is" << accumulate(a, a + n, 1, multiplies<int>()) << endl; //将类传递给通用算法
    return 0;
}