//函数对象
#include<iostream>
#include<numeric>//包含数值算法头文件
using namespace std;
class multclass
{
    public:
    int operator()(int x,int y) const//重载操作符()
    {
        return x*y;
    }
};
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    const int n = sizeof(a) / sizeof(int);
    cout << "the result by multipling all elements in a is" << accumulate(a, a + n, 1, multclass()) << endl;//将类传递给通用算法
    return 0;
}
