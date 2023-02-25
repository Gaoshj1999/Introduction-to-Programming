#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    double values[] = {1.23, 35.36, 653.7, 4358.24};
    string names[] = {"zoot", "jimmy", "ai", "stan"};
    for (int i = 0; i < 4; i++)
    {
        cout << setw(6) << names[i] << setw(10) << values[i] << endl;//输出宽度为6/10，默认右对齐
    }
    for (int i = 0; i < 4; i++)
    {
        cout << setiosflags(ios_base::left)//左对齐,一旦设置好不取消就一直在
        <<setw(6) << names[i] 
        << resetiosflags(ios_base::left)//取消左对齐
        << setw(10) << values[i] << endl;
    }
    return 0;
}