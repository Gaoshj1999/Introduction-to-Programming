#include "headtry.h"
#include <iostream> //如果是<>则按照标准模式搜索文件，如果是""则先搜索文件所在子目录，没有再按照标准模式搜索
using namespace std;
int main()
{
    point a(4, 5);
    cout << "point a:" << a.getx() << ',' << a.gety() << endl;
    point::showcount();
    point b(a);
    cout << "point b:" << b.getx() << ',' << b.gety() << endl;
    point::showcount();
    return 0;
}
//vscode暂不直接支持多文件编译，因此如果要这么干，要配置特别的环境，这里就暂时先不搞了，另外visual studio是可以多文件编译的