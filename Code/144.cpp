//排序
//选择排序
#include <iostream>
using namespace std;
template <class T>
void myswap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
template <class T>
void selectionsort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int leastindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[leastindex])
            {
                leastindex = j;
            }
            myswap(a[i], a[leastindex]);
        }
    }
}
