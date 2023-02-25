#include <iostream>
using namespace std;
int main()
{
    int a[3] = {0, 1, 2};
    int *ptr = a;//这表明a就是a这个数组的首地址(存放首地址的变量)，也就是a[0]
    int b[3] = {0, 1, 2};
    int *ptr1 = &b[0];
    cout << a[1] << " " << *(ptr + 1) << " " << *(a + 1) << " " << ptr[1] << endl;//这说明了这四个是相等的
    cout << b[1] << " " << *(ptr1 + 1) << " " << *(b + 1) << " " << ptr1[1] << endl;//也就是说a是一个地址常量，而指针是存放地址的变量
    return 0;
    //指针++是指向下一个完整数据的起始
}