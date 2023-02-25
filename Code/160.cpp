//函数对象
#include <iostream>
#include <numeric> //包含数值算法头文件
using namespace std;
int mult(int x, int y)
{
    return x * y;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    const int n = sizeof(a) / sizeof(int);
    cout << "the result by multipling all elements in a is" << accumulate(a, a + n, 1, mult) << endl;//将一个普通的函数名作为函数对象传过去
    return 0;
}