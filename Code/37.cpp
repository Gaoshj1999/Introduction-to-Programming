#include <iostream>
using namespace std;
int add(int x, int y);
int add(int x, int y, int z);//可以通过变量数字区分重载
int sumofsuqare(int x, int y);//可以通过形参的变量类型来区分重载
float sumofsuqare(float x,float y);
// float sumofsuqare(int x,int y);仅按返回值无法判断
// float sumofsuqare(int x,float y);修改一个变量类型加返回值是被允许的
int main()
{
    int x, y, z;
    cout << "请输入两个整数：" << endl;
    cin >> x >> y;
    cout << "和为：" << sumofsuqare(x, y) << endl;
    float a, b;
    cout << "请输入两个实数：" << endl;
    cin >> a >> b;
    cout << "和为：" << sumofsuqare(a, b) << endl;

    cout << "请输入z：" << endl;
    cin >> z;
    cout << "调用了两个变量的：" << add(x, y) << endl;
    cout << "调用了三个变量的：" << add(x, y, z) << endl;
    return 0;
}
int sumofsuqare(int x, int y)
{
    return x * x + y * y;
}
float sumofsuqare(float x, float y)
{
    return x * x + y * y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
int add(int x, int y)
{
    return x + y;
}