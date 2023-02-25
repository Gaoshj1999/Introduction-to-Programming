//函数适配器
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
int main()
{
    int intarr[] = {30, 90, 10, 40, 70, 50, 20, 80};
    const int n = sizeof(intarr) / sizeof(int);
    vector<int> a(intarr, intarr + n);
    vector<int>::iterator p = find_if(a.begin(), a.end(), bind2nd(greater<int>(), 40));
    //find_if()要求的是仅含有一个变量值x，greater()判断的是x>y,现在利用二元绑定将40赋值给y，变为x>40，就变为一元的就符合了
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
    return 0;
}