//数组
#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10]; //有十个下标，即有有十个元素，分别为a[0]-a[9];
    int c[5][3];      //五行三列//每一个数组元素相当于一个变量
    for (int i = 0; i < 10; i++)
    {
        a[i] = i * 2 - 1;
        b[10 - i - 1] = a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "a[" << i << "]=" << a[i] << " ";//这是输出数组序号的方式//也是在""内部也能够输出变量值的方式
        cout << "b[" << i << "]=" << b[i] << endl;
    }
    return 0;
}