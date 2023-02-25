//控制输出精度
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double values[] = {1.23, 35.36, 653.7, 4358.24};
    string names[] = {"zoot", "jimmy", "ai", "stan"};
    for (int i = 0; i < 4; i++)
    {
        cout << setiosflags(ios_base::left) //左对齐,一旦设置好不取消就一直在
             << setw(6) << names[i]
             << resetiosflags(ios_base::left) //取消左对齐
             << setw(10) << setprecision(1) << values[i] << endl;
        //setprecision(1),参数表示有效数字的位数(注是有效数字),没有指定小数或者科学计数法的方式则系统根据输出数据自定选择
    }
    cout << setiosflags(ios_base::fixed); //以小数方式输出
    for (int i = 0; i < 4; i++)
    {
        cout << setiosflags(ios_base::left) //左对齐,一旦设置好不取消就一直在
             << setw(6) << names[i]
             << resetiosflags(ios_base::left) //取消左对齐
             << setw(10) << setprecision(1) << values[i] << endl;
    }
    /* cout << setiosflags(ios_base::scientific); //以科学计数法的方式输出
    for (int i = 0; i < 4; i++)
    {
        cout << setiosflags(ios_base::left) //左对齐,一旦设置好不取消就一直在
             << setw(6) << names[i]
             << resetiosflags(ios_base::left) //取消左对齐
             << setw(10) << setprecision(1) << values[i] << endl;
    } */
    return 0;
}