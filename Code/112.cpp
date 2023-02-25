//用动态内存分配来输出矩阵的转置
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int **a;                    //指向二维数组的指针a，是int类型指向指针的指针
    a = new int *[3];           //生成的是一个指针数组,其中每一个元素都将指向一个一维数组,也就是每一行的首地址;
    for (int i = 0; i < 3; i++) //生成了动态的二维数组
    {
        a[i] = new int[3];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "初始矩阵:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    cout << "转置后矩阵:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}