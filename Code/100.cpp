#include <iostream>
using namespace std;
int main()
{
    int(*cp)[9][8] = new int[7][9][8]; //注，这里的(*cp)不是指针数组，而是指向[9][8]这样一个数组的指针//要创建指向数组的指针就降一维，以指向后n-1维定义
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 9; j++)
            for (int k = 0; k < 8; k++)
            {
                *(*(*(cp + i) + j) + k) = (i * 100 + j * 10 + k);//这里的cp是一个指向二维数组的指针，且有连续的7个二维数组为单位的数据//是地址
                //加一层*后，是一个指向一维数组的指针，且有连续的9个一维数组为单位的数据//是地址
                //加两层*后，是一个指向元素的指针，且有连续的8个元素为单位的数据//是地址
                //加三层*后，就访问到了元素内部的数据，就是普通的指针运算了//访问到了地址内的元素
            }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cout << cp[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    delete[] cp;
    return 0;
}