#include <iostream>
using namespace std;
int add(int x, int y = 9, int z = 10); //因为输入参数是从左到右赋值，因此规定所有有初始值的变量必须靠右
int main()
{
    int x;
    cout << "请输入一个数：" << endl;
    cin >> x;
    cout <<add(x); //输入的参数会从左往右赋值，如果没有赋全则调用初始值
    return 0;
}
int add(int x,int y,int z)//如果在声明的时候就给初始值了，那么在后面定义的时候就不能再给了，即使一样
{
    return x+y+z;
}
