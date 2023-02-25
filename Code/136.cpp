#include <iostream>
using namespace std;
template <class T> //定义函数模板//这里学class或者typename都是可以的
void outputarray(const T *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    const int acount = 8, bcount = 8, ccount = 20;
    int a[acount] = {1, 2, 3, 4, 5, 6, 7, 8};
    double b[bcount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
    char c[ccount] = "welcome";
    cout << "a array contains:" << endl;
    outputarray(a, acount);
    cout << "b array contains:" << endl;
    outputarray(b, bcount);
    cout << "c array contains:" << endl;
    outputarray(c, ccount);
    return 0;
}