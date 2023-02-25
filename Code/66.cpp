#include <iostream>
using namespace std;
int i = 0;//这里是全局变量
void other()
{
    static int a = 2;
    static int b;
    int c;
    a += 2;
    i += 32;
    c += 5;
    cout << "----other----" << endl;
    cout << "i=" << i << "a=" << a << "b=" << b << "c=" << c << endl;
    b = a;
}
int main()
{
    static int a;//局部静态变量
    int b = -10;//这个也算是局部变量，是在main主函数中的局部变量，动态变量，在main中生效，因为在other中重名，所以不在other中生效
    int c=0;
    cout << "----main----" << endl;
    cout << "i=" << i << "a=" << a << "b=" << b << "c=" << c << endl;
    c += 8;
    other();
    cout << "----main----" << endl;
    cout << "i=" << i << "a=" << a << "b=" << b << "c=" << c << endl;
    i += 10;
    other();//再次进到other函数中，静态变量就不会再被初始化了
    return 0;
}
/* ----main----
i=0a=0b=-10c=0
----other----
i=32a=4b=0c=5
----main----
i=32a=0b=-10c=8
----other----
i=74a=6b=4c=5 */
//静态生存期指的是在程序运行期间静态变量的值就是一直保存着的，即使局部静态变量只在局部生效，但是设置了就不会消亡